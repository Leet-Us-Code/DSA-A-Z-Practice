//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void hamiltonian(vector<int> adj[], int s, bool visited[], vector<int> &paths, int v)
{
    if(paths.size() == v)
    {
        for(int i = 0; i < paths.size(); i++)
        cout << paths[i] << " ";
        cout << endl;
        return;
    }
    for(int ind : adj[s])
    {
        //ensuring only unique nodes are inserted in path vector
        if(visited[ind] == false)
        {
            visited[ind] = true;
            paths.push_back(ind);
            hamiltonian(adj, ind, visited, paths, v);
            visited[ind] = false;
            paths.pop_back();
        }
    }
}
//to find the hamiltonian cyclle check the start of the path and check the end of the path and see if they share an edge, if yes then it's a cycle else not
int main()
{
    int v, e;
    cin >> v >> e;
    vector<int> adj[100000];
    for(int i = 0; i < e; i++)
    {
        int s, d;
        cin >> s >> d;
        addEdge(adj, s, d);
    }
    int src;
    cin >> src;
    bool visited[v] = {false};
    vector<int> paths;
    hamiltonian(adj, src, visited, paths, v);
    
}
