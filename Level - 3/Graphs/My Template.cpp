//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARYANAA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
class Graph 
{
    public:
    vector<vector<pair<int, int>>> adj_list; 
    void addEdge(int src, int dest, int wt)
    {
        adj_list[src].push_back(make_pair(dest, wt));
        adj_list[dest].push_back(make_pair(src, wt));
    }
    void printGraph()
    {
        for(int i = 0; i < adj_list.size(); i++)
        {
            cout << i << " -> ";
            for(int j = 0; j < adj_list[i].size(); j++)
            {
                cout << adj_list[i][j].first << " -> ";
            }
            cout << endl;
        }
    }
    void bfs(int src)
    {
        vector<bool> visited; 
        queue<int> q;
        q.push(src);
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            if(!visited[u])
            {
                cout << u << " -> ";
                visited[u] = true;
            }
            for(auto v : adj_list[u])
            {
                int v1 = v.first;
                if(!visited[v1])
                {
                    q.push(v1);
                }
            }
        }
    }
    void dfsHelper(int src, vector<int> &visited)
    {
        visited[src] = true;
        cout << src << " -> ";
        for(auto v : adj_list[src])
        {
            int v1 = v.first; 
            if(!visited[v1])
            {
                dfsHelper(v1, visited);
            }
        }
        
    }
    void dfs(int src)
    {
        vector<int> visited;
        dfsHelper(src, visited);
    }
}
