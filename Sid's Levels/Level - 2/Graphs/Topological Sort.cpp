class Solution
{
	public:
	void topoHelper(int src, stack<int> &topo, vector<int> adj[], bool visited[])
	{
	    visited[src] = true;
	    for(auto it = adj[src].begin(); it != adj[src].end(); it++)
	    {
	        if(!visited[*it])
	        {
	            topoHelper(*it, topo, adj, visited);
	        }
	    }
	    topo.push(src);
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    //OM GAN GANAPATHAYE NAMO NAMAH 
	    //JAI SHRI RAM 
	    //JAI BAJRANGBALI 
	    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
	    bool visited[V];
	    for(int i = 0; i < V; i++)
	    visited[i] = false;
	    stack<int> topo;
	    for(int i = 0; i < V; i++)
	    {
	        //call topological sort for unvisited nodes 
	        if(!visited[i])
	        {
	            topoHelper(i, topo, adj, visited);
	        }
	    }
	    vector<int> topoVec;
	    while(!topo.empty())
	    {
	        topoVec.push_back(topo.top());
	        topo.pop();
	    }
	    return topoVec;
	}
};
