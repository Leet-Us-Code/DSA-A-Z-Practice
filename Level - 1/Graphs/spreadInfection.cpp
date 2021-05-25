//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
struct pair1 
{
    int v;
    int t;
    pair1(int v1, int t1)
    {
        v = v1;
        t = t1;
    }
};
int infectionSpread(vector<int> adj[], int src, int t, int v)
{
    int visited[v] = {0};
    int count = 0;
    queue<pair1> q;
    q.push(pair1(src, 1));
    while(q.size() > 0)
    {
        pair1 x = q.front();
        q.pop();
        //if the vertice is not visited previously 
        if(visited[x.v] == 0)
        {
            visited[x.v] = x.t;
            if(x.t > t)
            break;
            count++;
            for(int ind : adj[x.v])
            {
                if(visited[ind] == 0)
                {
                    q.push(pair1(ind, x.t + 1));
                }
            }
        }
    }
    return count;
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
    int src, t;
    cin >> src >> t;
    int res = infectionSpread(adj, src, t, v);
    cout << res << endl;
    
}
