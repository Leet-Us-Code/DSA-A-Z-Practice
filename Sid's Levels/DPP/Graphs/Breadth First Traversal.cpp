class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void bfsHelper(int src, vector<int> adj[], vector<bool> &visited, vector<int> &res)
    {
        queue<int> q;
        q.push(src);
        visited[src] = true;
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            res.push_back(u);
            for(int node : adj[u])
            {
                if(!visited[node])
                {
                    q.push(node);
                    visited[node] = true;
                }
            }
        }
    }
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector<bool> visited(V, false);
	    vector<int> res;
	    //we use for loop in case of unconnected graphs with more than 1 commponent
	   // for(int i = 0; i < V; i++)
	   // {
	   //     if(!visited[i])
	   //     {
	   //         bfsHelper(i, adj, visited, res);
	   //     }
	   // }
	   //we should start from 0 it seems -> 
	   bfsHelper(0, adj, visited, res);
	    return res;
	}
};
