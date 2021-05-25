class Solution 
{
    public:
	//Function to return a list containing the DFS traversal of the graph.
	void dfsHelper(vector<int> &dfs, int V, vector<int> adj[], bool visited[], int src)
	{
	    visited[src] = true;
	    dfs.push_back(src);
	    for(auto it = adj[src].begin(); it != adj[src].end(); it++)
	    {
	        if(visited[*it] == false)
	        {
	            dfsHelper(dfs, V, adj, visited, *it);
	        }
	    }
	}
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    //OM GAN GANAPATHAYE NAMO NAMAH 
	    //JAI SHRI RAM 
	    //JAI BAJRANGBALI 
	    //AMME NARAYANA, DEEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
	    bool visited[100000];
	    for(int i = 0; i < V ;i++)
	    visited[i] = false;
	    vector<int> dfs;
	    dfsHelper(dfs, V, adj, visited, 0);
	    return dfs;
	}
};
