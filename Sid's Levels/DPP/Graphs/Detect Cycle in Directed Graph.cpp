class Solution
{
    public:
	//Function to detect cycle in a directed graph.
	//OM GAN GANAPATHAYE NAMO NAMAH 
	//JAI SHRI RAM 
	//JAI BAJRANGBALI 
	//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
	bool hasCycle(int src, vector<bool> &visited, vector<bool> &backEdge, vector<int> adj[])
	{
	    visited[src] = true;
	    backEdge[src] = true;
	    for(int node : adj[src])
	    {
	        if(!visited[node])
	        {
	            bool remaining = hasCycle(node, visited, backEdge, adj);
	            if(remaining)
	            return true;
	        }
	        else 
	        {
	            if(backEdge[node] == true)
	            return true;
	        }
	    }
	    backEdge[src] = false;
	    return false;
	}
	bool isCyclic(int v, vector<int> adj[]) 
	{
	   	// code here
	   	vector<bool> visited(v, false);
	   	vector<bool> backedge(v, false);
	   	for(int i = 0; i < v; i++)
	   	{
	   	    if(!visited[i])
	   	    {
	   	        bool x = hasCycle(i, visited, backedge, adj);
	   	        if(x)
	   	        return true;
	   	    }
	   	}
	   	return false;
	}
};
