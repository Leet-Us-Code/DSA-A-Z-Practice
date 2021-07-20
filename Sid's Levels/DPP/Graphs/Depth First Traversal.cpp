class Solution 
{
    public:
	//Function to return a list containing the DFS traversal of the graph.
	//OM GAN GANAPATHAYE NAMO NAMAH 
	//JAI SHRI RAM 
	//JAI BAJRANGBALI 
	//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
	void dfsHelper(int src, vector<int> adj[], vector<bool> &visited, vector<int> &res)
	{
	    visited[src] = true;
	    res.push_back(src);
	    for(int node : adj[src])
	    {
	        if(!visited[node])
	        {
	            dfsHelper(node, adj, visited, res);
	        }
	    }
	}
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector<int> res;
	    vector<bool> visited(V, false);
	    for(int i = 0; i < V; i++)
	    {
	        if(!visited[i])
	        {
	            dfsHelper(i, adj, visited, res);
	        }
	    }
	    return res;
	}
};
