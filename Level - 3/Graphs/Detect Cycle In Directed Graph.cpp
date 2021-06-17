class Solution
{
    public:
	//Function to detect cycle in a directed graph.
	//OM GAN GANAPATHAYE NAMO NAMAH 
	//JAI SHRI RAM 
	//JAI BAJRANGBALI 
	//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
	bool cycleExists(int src, vector<bool> &visited, vector<bool> &dfsVisited, vector<int> adj[])
	{
	    visited[src] = true;
	    dfsVisited[src] = true;
	    for(int u : adj[src])
	    {
	        if(!visited[u])
	        {
	            if(cycleExists(u, visited, dfsVisited, adj))
	            return true;
	        }
	        else if(dfsVisited[u])
	        return true;
	    }
	    dfsVisited[src] = false;
	    return false;
	}
	bool isCyclic(int V, vector<int> adj[]) 
	{
	   	// code here
	   	vector<bool> visited(V, false), dfsVisited(V, false);
	   	for(int i = 0; i < V; i++)
	   	{
	   	    if(!visited[i])
	   	    {
	   	        bool x = cycleExists(i, visited, dfsVisited, adj);
	   	        if(x)
	   	        return true;
	   	    }
	   	}
	   	return false;
	}
};
