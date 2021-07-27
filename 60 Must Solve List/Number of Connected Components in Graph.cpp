// Hari

#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[], int u, bool* vis){
    vis[u] = true;
    for(auto it: adj[u]){
        if(!vis[it]) dfs(adj, it, vis);
    }
}

int findConnected(vector<int> adj[], int n){
    bool vis[n+1] = {false};
    int num_of_components = 0;
    for(int i = 1; i<=n; ++i){
        if(!vis[i]){
            dfs(adj, i, vis);
            num_of_components += 1;
        }
    }
    return num_of_components;
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, e;
    cin >> n >> e; // no of nodes and edges resp
    vector<int> adj[n+1]; // NOTE: putting "vector<int> adj[n+1] = {0}" was causing an error in main. IF you determine the size of vector, dont initialize

    for(int i = 0; i<e; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << findConnected(adj, n);
    return 0;
}
