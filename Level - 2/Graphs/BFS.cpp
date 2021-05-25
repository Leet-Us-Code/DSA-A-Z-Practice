class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
    void bfsHelper(vector<int> &bfs, bool visited[], vector<int> adj[], int src)
    {
        queue<int> q;
        q.push(src);
        visited[src] = true;
        while(!q.empty())
        {
            int cur = q.front();
            q.pop();
            bfs.push_back(cur);
            for(auto it = adj[cur].begin(); it != adj[cur].end(); it++)
            {
                if(visited[*it] != true)
                {
                    q.push(*it);
                    visited[*it] = true;
                }
            }
        }
    }
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    //OM GAN GANAPATHAYE NAMO NAMAH 
	    //JAI SHRI RAM 
	    //JAI BAJRANGBALI 
	    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
	    vector<int> bfs;
	    bool visited[V];
	    for(int i = 0; i < V; i++)
	    visited[i] = false;
	    bfsHelper(bfs, visited, adj, 0);
	    return bfs;
	}
};
