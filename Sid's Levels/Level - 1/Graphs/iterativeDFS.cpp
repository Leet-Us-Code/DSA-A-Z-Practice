//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
struct pair1 
{
    int v;
    string psf;
    pair1(int v1, string s1)
    {
        v = v1;
        psf = s1;
    }
};
void iterDFS(vector<int> adj[], int src, bool visited[])
{
    stack<pair1> s;
    s.push(pair1(src, to_string(src) + ""));
    while(!s.empty())
    {
        pair1 x = s.top();
        s.pop();
        if(!visited[x.v])
        {
            visited[x.v] = true;
            cout << x.v << "@" << x.psf << endl;
            for(int i = 0; i < adj[x.v].size(); i++)
            {
                int ind = adj[x.v][i];
                if(visited[ind] == false)
                {
                    s.push(pair1(ind, x.psf + to_string(ind)));
                }
            }
        }
    }
}
int main()
{
    int v, e;
    cin >> v >> e;
    vector<int> adj[1000];
    for(int i = 0; i < e; i++)
    {
        int s, d, w;
        cin >> s >> d >> w;
        adj[s].push_back(d);
        adj[d].push_back(s);
    }
    int src;
    cin >> src;
    bool visited[v] = {false};
    iterDFS(adj, src, visited);
}
