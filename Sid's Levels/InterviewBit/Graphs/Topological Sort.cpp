class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	
	//OM GAN GANAPATHAYE NAMO NAMAH 
	//JAI SHRI RAM 
	//JAI BAJRANGBALI 
	//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
	void dfs(int src, vector<bool> &visited, stack<int> &s, vector<int> adj[])
	{
	    visited[src] = true;
	    for(int node : adj[src])
	    {
	        if(!visited[node])
	        {
	            dfs(node, visited, s, adj);
	        }
	    }
	    s.push(src);
	}
	vector<int> topoSort(int v, vector<int> adj[]) 
	{
	    // code here
	    stack<int> s;
	    vector<int> topo;
	    vector<bool> visited(v, false);
	    for(int i = 0; i < v; i++)
	    {
	        if(!visited[i])
	        {
	            dfs(i, visited, s, adj);
	        }
	    }
	    while(!s.empty())
	    {
	        topo.push_back(s.top());
	        s.pop();
	    }
	    return topo;
	}
};
