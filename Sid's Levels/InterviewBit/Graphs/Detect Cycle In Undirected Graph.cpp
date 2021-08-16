class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSMHI NARAYANA, BHADRE NARAYANA
    bool checkCycle(int src, vector<bool> &visited, vector<int> adj[], int par)
    {
        visited[src] = true;
        for(int node : adj[src])
        {
            if(!visited[node])
            {
                bool rem = checkCycle(node, visited, adj, src);
                if(rem)
                return true;
            }
            else 
            {
                if(node != par)
                return true;
            }
        }
        return false;
    }
	bool isCycle(int v, vector<int>adj[])
	{
	    // Code here
	    vector<bool> visited(v, false);
	    for(int i = 0; i < v; i++)
	    {
	        if(!visited[i])
	        {
	            bool x = checkCycle(i, visited, adj, -1);
	            if(x)
	            return true;
	        }
	    }
	    return false;
	}
};
