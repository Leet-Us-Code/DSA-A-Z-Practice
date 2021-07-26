class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool hasCycle(int src, vector<int> adj[], vector<bool> &visited)
    {
        queue<int> q;
        q.push(src);
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            if(visited[u])
                return true;
            visited[u] = true;
            for(int nodes : adj[u])
            {
                if(!visited[nodes])
                {
                    q.push(nodes);
                }
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
	            bool x = hasCycle(i, adj, visited);
	            if(x)
	                return true;
	        }
	    }
	    return false;
	}
};
