class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	//OM GAN GANAPATHAYE NAMO NAMAH 
	//JAI SHRI RAM 
	//JAI BAJRANGBALI 
	//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
	void topoSort(int src, vector<bool> &visited, stack<int> &s, vector<int> adj[])
	{
	    visited[src] = true;
	    for(int node : adj[src])
	    {
	        if(!visited[node])
	        {
	            topoSort(node, visited, s, adj);
	        }
	    }
	    s.push(src);
	}
	void dfs(int src, vector<bool> &visited, vector<int> adj[])
	{
	    visited[src] = true;
	    for(int node : adj[src])
	    {
	        if(!visited[node])
	        {
	            dfs(node, visited, adj);
	        }
	    }
	}
    int kosaraju(int v, vector<int> adj[])
    {
        //code here
        vector<bool> visited(v, false);
        vector<int> topo;
        stack<int> s;
        for(int i = 0; i < v; i++)
        {
            if(!visited[i])
            {
                topoSort(i, visited, s, adj);
            }
        }
        while(!s.empty())
        {
            topo.push_back(s.top());
            s.pop();
        }
        //reverse the graph 
        vector<int> revAdj[5001];
        for(int i = 0; i < v; i++)
        {
            visited[i] = false;
            for(int node : adj[i])
            {
                revAdj[node].push_back(i);
            }
        }
        //perform dfs according to topo sort 
        int cmp = 0;
        for(int i = 0; i < topo.size(); i++)
        {
            int n = topo[i];
            if(!visited[n])
            {
                dfs(n, visited, revAdj);
                cmp++;
            }
        }
        return cmp;
    }
};
