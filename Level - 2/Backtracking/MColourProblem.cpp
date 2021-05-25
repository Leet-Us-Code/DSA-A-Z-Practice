// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA

bool helper(bool graph[101][101], int m, int v, int colours[], int i)
{
    if(i == v)
    {
        return true;
    }
    for(int col = 0; col < m; col++)
    {
        //check if any adjacent vertice has the same colour or not 
        int flag = 0;
        for(int x = 0; x < v; x++)
        {
            if(graph[x][i] == true)
            {
                if(colours[x] == col)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0)
        {
            colours[i] = col;
            if(helper(graph, m, v, colours, i+1))
            return true;
            colours[i] = -1;
        }
    }
    return false;
    
}

bool graphColoring(bool graph[101][101], int m, int V) {
    // your code here
    int colours[V];
    for(int i = 0; i < V; i++)
    colours[i] = -1;
    return helper(graph, m, V, colours, 0);
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        cout << graphColoring(graph, m, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
