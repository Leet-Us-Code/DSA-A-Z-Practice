class Solution
{
    public:
	//Function to detect cycle in a directed graph.
	//OM GAN GANAPATHAYE NAMO NAMAH 
	//JAI SHRI RAM 
	//JAI BAJRANGBALI 
	//AMME NARAYANA, DEVI NARAYANA, LASKHMI NARAYANA, BHADRE NARAYANA
	bool hasCycle(int src, vector<bool> &visited, vector<bool> &backedge, vector<int> adj[])
	{
	    visited[src] = true;
	    backedge[src] = true;
	    for(int node : adj[src])
	    {
	        if(!visited[node])
	        {
	            bool rem = hasCycle(node, visited, backedge, adj);
	            if(rem)
	            return true;
	        }
	        else
	        {
	            if(backedge[node])
	            return true;
	        }
	    }
	    backedge[src] = false;
	    return false;
	}
	bool isCyclic(int v, vector<int> adj[]) 
	{
	   	// code here
	   	//backedge must be detected  
	   	vector<bool> visited(v, false);
	   	vector<bool> backedge(v, false);
	   	for(int i = 0; i < v; i++)
	   	{
	   	    if(!visited[i])
	   	    {
	   	        if(hasCycle(i, visited, backedge, adj))
	   	        return true;
	   	    }
	   	}
	   	return false;
	}
};
