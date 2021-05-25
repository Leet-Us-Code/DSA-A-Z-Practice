//OM  GAN GANAPATHAYE NAMO NAMAH 
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
void DFS(vector<int> adj[], int i, vector<int> &comp, bool visited[])
{
    visited[i] = true;
    comp.push_back(i);
    for(int j = 0; j < adj[i].size(); j++)
    {
        int ind;
        ind = adj[i][j];
        if(visited[ind] == false)
        {
            DFS(adj, ind, comp, visited);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> adj[1000];
    for(int i = 0; i < n; i++)
    {
        int s, d;
        cin >> s >> d;
        addEdge(adj, s, d);
    }
    bool visited[n] = {false};
    vector<vector<int>> components;
    int x = 1;
    for(int i = 0; i < n; i++)
    {
        if(visited[i] == false)
        {
            vector<int> comp;
            DFS(adj, i, comp, visited);
            components.push_back(comp);
            x = x * comp.size();
            comp.clear();
        }
    }
    cout << components.size() << endl;
    cout << x << endl;
}
