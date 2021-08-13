class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LASKHMI NARAYANA, BHADRE NARAYANA
    void bfsHelper(int src, vector<int> adj[], vector<bool> &visited, vector<int> &bfs)
    {
        queue<int> q;
        q.push(src);
        visited[src] = true;
        while(!q.empty())
        {
            int cur = q.front();
            bfs.push_back(cur);
            q.pop();
            for(int node : adj[cur])
            {
                if(!visited[node])
                {
                    visited[node] = true;
                    q.push(node);
                }
            }
        }
    }
	vector<int>bfsOfGraph(int v, vector<int> adj[])
	{
	    // Code here
	    vector<bool> visited(v, false);
	    vector<int> bfs;
	    bfsHelper(0, adj, visited, bfs);
	    return bfs;
	}
};
