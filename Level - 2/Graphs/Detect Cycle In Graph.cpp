bool bfsHelper(int src, bool visited[], vector<int> adj[])
    {
        queue<int> q;
        q.push(src);
        while(!q.empty())
        {
            int cur = q.front();
            q.pop();
            if(visited[cur] == true)
            return true;
            visited[cur] = true;
            for(auto it = adj[cur].begin(); it != adj[cur].end(); it++)
            {
                if(!visited[*it])
                {
                    q.push(*it);
                }
            }
        }
        return false;
    }
	bool isCycle(int V, vector<int>adj[])
	{
	    // Code here
	    //OM GAN GANAPATHAYE NAMO NAMAH 
	    //JAI SHRI RAM 
	    //JAI BAJRANGBALI 
	    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
	    bool visited[V];
	    for(int i = 0; i < V; i++)
	    visited[i] = false;
	    for(int i = 0; i <V; i++)
	    {
	        //check for each node
	        if(!visited[i])
	        {
	            if(bfsHelper(i, visited, adj))
	            return true;
	            
	        }
	    }
	    return false;
	}
