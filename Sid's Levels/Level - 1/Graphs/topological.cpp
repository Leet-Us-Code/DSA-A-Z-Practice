//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
void topological(vector<int> adj[], int src, bool visited[], stack<int> &s)
{
    visited[src] = true;
    for(int i = 0; i < adj[src].size(); i++)
    {
        int ind = adj[src][i];
        if(visited[ind] == false)
        {
            topological(adj, ind, visited, s);
        }
    }
    //push the nod ein post order fomat
    s.push(src);
}
int main()
{
    int v, e;
    vector<int> adj[1000];
    cin >> v >> e;
    for(int i = 0; i < e; i++)
    {
        int s, d;
        cin >> s  >> d;
        adj[s].push_back(d);
    }
    bool visited[v] = {false};
    stack<int> s;
    for(int i = 0; i < v; i++)
    {
        if(visited[i] == false)
        {
            topological(adj, i, visited, s);
        }
    }
    while(!s.empty())
    {
        
        cout << s.top() << endl;
        s.pop();
    }
}
