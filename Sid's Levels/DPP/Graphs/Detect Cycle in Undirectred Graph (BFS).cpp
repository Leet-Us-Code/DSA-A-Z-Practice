class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool cycleExists(int src, vector<int> adj[], vector<bool> &visited)
    {
        queue<int> q;
        q.push(src);
        while(!q.empty())
        {
            int curNode = q.front();
            q.pop();
            if(visited[curNode])
            return true;
            visited[curNode] = true;
            for(int node : adj[curNode])
            {
                if(!visited[node])
                {
                    q.push(node);
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
	            if(cycleExists(i, adj, visited))
	            return true;
	        }
	    }
	    return false;
	}
};
