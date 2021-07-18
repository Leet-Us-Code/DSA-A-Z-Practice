//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<pair<int, int>> adj[], int u, int v, int w)
{
    adj[u].push_back(make_pair(v,w));
    adj[v].push_back(make_pair(u,w));
}
void connected(vector<pair<int,int>> adj[], int u, bool visited[], vector<int> &comp)
{
    comp.push_back(u);
    visited[u] = true;
    for(int i = 0; i < adj[u].size(); i++)
    {
        int ind = adj[u][i].first;
        if(visited[ind] == false)
        {
            connected(adj, ind, visited, comp);
        }
    }
}
int main()
{
    int v, e;
    cin >> v;
    cin >> e;
    vector<pair<int,int>> adj[100000];
    for(int i = 0; i < v; i++)
    {
        int s, d, w;
        cin >> s >> d >> w;
        addEdge(adj, s, d, w);
    }
    bool visited[v] = {false};
    vector<vector<int>> components;
    for(int i = 0; i < v; i++)
    {
        vector<int> comp;
        if(visited[i] == false)
        {
            connected(adj, i, visited, comp);
            components.push_back(comp);
            comp.clear();
        }
        
    }
    cout << "[";
    for(int i = 0; i < components.size(); i++)
    {
        for(int j = 0; j < components[i].size(); j++)
        {
            cout << components[i][j] << " ";
        }
    }
    cout << "]";
}
