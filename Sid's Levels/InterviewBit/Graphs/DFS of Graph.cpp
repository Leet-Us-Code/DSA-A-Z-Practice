class Solution 
{
    public:
	//Function to return a list containing the DFS traversal of the graph.
	//OM GAN GANAPATHAYE NAMO NAMAH 
	//JAI SHRI RAM 
	//JAI BAJRANGBALI 
	//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
	void dfsHelper(int src, vector<int> adj[], vector<bool> &visited, vector<int> &dfs)
	{
	    dfs.push_back(src);
	    visited[src] = true;
	    for(int node : adj[src])
	    {
	        if(!visited[node])
	        {
	            dfsHelper(node, adj, visited, dfs);
	        }
	    }
	}
	vector<int>dfsOfGraph(int v, vector<int> adj[])
	{
	    // Code here
	    vector<int> dfs;
	    vector<bool> visited(v, false);
	    dfsHelper(0, adj, visited, dfs);
	    return dfs;
	}
};
