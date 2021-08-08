class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	//OM GAN GANAPATHAYE NAMO NAMAH 
	//JAI SHRI RAM 
	//JAI BAJRANGBALI 
	//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
	void topoSortHelper(int src, vector<bool> &visited, stack<int> &s, vector<int> adj[])
	{
	    visited[src] = true;
	    for(int node : adj[src])
	    {
	        if(!visited[node])
	        topoSortHelper(node, visited, s, adj);
	    }
	    s.push(src);
	}
	vector<int> topoSort(int v, vector<int> adj[]) 
	{
	    // code here
        vector<int> topo;
        stack<int> topoStack;
        vector<bool> visited(v, false);
        for(int i = 0; i < v; i++)
        {
            if(!visited[i])
            {
                topoSortHelper(i, visited, topoStack, adj);
            }
        }
        while(!topoStack.empty())
        {
            topo.push_back(topoStack.top());
            topoStack.pop();
        }
        return topo;
	}
};
