class Solution 
{
    public:
	//Function to return a list containing the DFS traversal of the graph.
	void helper(int src, vector<bool> &visited, vector<int> adj[], vector<int> &dfs)
	{
	    visited[src] = true;
	    dfs.push_back(src);
	    for(int u : adj[src])
	    {
	        if(!visited[u])
	        {
	            helper(u, visited, adj, dfs);
	        }
	    }
	}
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    //OM GAN GANAPATHAYE NAMO NAMAH 
	    //JAI SHRI RAM 
	    //JAI BAJRANGBALI 
	    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
	    vector<bool> visited(V);
	    vector<int> dfs;
	    for(int i = 0; i < V; i++)
	    {
	        if(!visited[i])
	        {
	            helper(i, visited, adj, dfs);
	        }
	    }
	    return dfs;
	}
};
