//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
struct triple
{
    int v;
    int p;
    int wt;
    triple(int v1, int p1, int wt1)
    {
        v = v1;
        p = p1;
        wt = wt1;
    }
};
struct CompareWeight {
    bool operator()(triple const& p1, triple const& p2)
    {
        // return "true" if "p1" is ordered 
        // before "p2", for example:
        return p1.wt > p2.wt;
    }
};
void prims(vector<pair<int, int>> adj[], int v)
{
    priority_queue<triple, vector<triple>, CompareWeight> q;
    q.push(triple(0, -1, 0));
    bool visited[v] = {false};
    while(!q.empty())
    {
        triple x = q.top();
        q.pop();
        if(!visited[x.v])
        {
            visited[x.v] = true;
            if(x.p != -1)
            cout << "[" << x.v << "-" << x.p << "@" << x.wt << "]"<< endl;
            for(int i = 0; i < adj[x.v].size(); i++)
            {
                int ind = adj[x.v][i].first;
                int wt = adj[x.v][i].second;
                if(visited[ind] == false)
                {
                    q.push(triple(ind, x.v, wt));
                }
            }
        }
    }
}
int main()
{
    int v, e;
    cin >> v >> e;
    vector<pair<int, int>> adj[1000];
    for(int i = 0; i < e; i++)
    {
        int s, d, w;
        cin >> s >> d >> w;
        adj[s].push_back(make_pair(d,w));
        adj[d].push_back(make_pair(s,w));
    }
    prims(adj, v);
    
}
