class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void bfsHelper(int src, vector<int> adj[], vector<bool> &visited, vector<int> &bfs)
    {
        queue<int> q;
        q.push(src);
        visited[src] = true;
        while(!q.empty())
        {
            int curNode = q.front();
            q.pop();
            bfs.push_back(curNode);
            for(int nodes : adj[curNode])
            {
                if(!visited[nodes])
                {
                    q.push(nodes);
                    visited[nodes] = true;
                }
            }
        }
    }
	vector<int>bfsOfGraph(int v, vector<int> adj[])
	{
	    // Code here
	    vector<int> bfs;
	    vector<bool> visited(v, false);
	    bfsHelper(0, adj, visited, bfs);
	    return bfs;
	}
};
