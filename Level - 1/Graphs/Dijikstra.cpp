//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
struct triple 
{
    int v;
    int w;
    string psf;
    triple(int v1, string s, int w1)
    {
        v = v1;
        psf = s;
        w = w1;
    }
};
struct CompareWeight {
    bool operator()(triple const& p1, triple const& p2)
    {
        // return "true" if "p1" is ordered 
        // before "p2", for example:
        return p1.w > p2.w;
    }
};
void dijikstra(vector<pair<int, int>> adj[], int src, int v)
{
    priority_queue<triple, vector<triple>, CompareWeight> q;
    q.push(triple(src, to_string(src) + "", 0));
    bool visited[v] = {0};
    while(!q.empty())
    {
        triple x = q.top();
        q.pop();
        if(!visited[x.v])
        {
            visited[x.v] = true;
            cout << x.v << " via " << x.psf << " @ " << x.w << endl;
            for(int i = 0; i < adj[x.v].size(); i++)
            {
                int ind = adj[x.v][i].first;
                int wt = adj[x.v][i].second;
                string news = x.psf + to_string(ind);
                q.push(triple(ind, news, x.w + wt));
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
    int src;
    cin >> src;
    dijikstra(adj, src, v);
    cout << endl;
}
