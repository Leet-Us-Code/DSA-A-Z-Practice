
class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
    void bfsHelper(int src, vector<bool> &visited, vector<int> &res, vector<int> adj[])
    {
        queue<int> q;
        visited[src] = true;
        q.push(src);
        while(!q.empty())
        {
            int u = q.front();
            res.push_back(u);
            q.pop();
            for(int v : adj[u])
            {
                if(!visited[v])
                {
                    q.push(v);
                    visited[v] = true;
                }
            }
        }
    }
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    //OM GAN GANAPATHAYE NAMO NAMAH 
	    //JAI SHRI RAM 
	    //JAI BAJRANGBALI 
	    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
	    vector<bool> visited(V, false);
	    vector<int> bfs;
	    bfsHelper(0, visited, bfs, adj);
	    return bfs;
	}
};
