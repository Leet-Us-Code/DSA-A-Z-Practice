class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void bfs(vector<vector<int>> &adj, int src, vector<int> &visited){
    
        queue<int> q;
        visited[src] = true;
        q.push(src);

        while(!q.empty()) {
            auto u = q.front();
            q.pop();

            for(auto &v : adj[u]) {
                if(!visited[v]){
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
    }

    int makeConnected(int n, vector<vector<int>>& connections) {

        int edges = connections.size();
        if(n - 1 > edges)
            return -1;
        vector<vector<int>> adj(n);

        for(auto v : connections) {
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }

        vector<int> visited(n, false);
        int connected_cmp = 0;

        for(int i=0; i<n; ++i)
        {
            if(!visited[i])  {
                connected_cmp++;
                bfs(adj, i, visited);
            }
        }
        return connected_cmp - 1;
    } 
};
