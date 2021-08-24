class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void dfs(int src, vector<int> adj[], vector<bool> &visited)
    {
        visited[src] = true;
        for(int node : adj[src])
        {
            if(!visited[node])
            {
                dfs(node, adj, visited);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(n - 1 > connections.size())
            return -1;
        vector<int> adj[100000];
        for(int i = 0; i < connections.size(); i++)
        {
            int u = connections[i][0];
            int v = connections[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int m = connections.size();
        vector<bool> visited(n, false);
        int cmp = 0;
        for(int i = 0; i < n; i++)
        {
            if(!visited[i])
            {
                dfs(i, adj, visited);
                cmp++;
            }
        }
        return cmp - 1;
    }
};
