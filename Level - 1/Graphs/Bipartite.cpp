#include <iostream>
#include <vector>
#include <queue>
using namespace std;
 
// data structure to store graph edges
struct Edge {
    int src, dest;
};
 
// class to represent a graph object
class Graph
{
public:
    // construct a vector of vectors to represent an adjacency list
    vector<vector<int>> adjList;
 
    // Graph Constructor
    Graph(vector<Edge> const &edges, int N)
    {
        // resize the vector to N elements of type vector<int>
        adjList.resize(N);
 
        // add edges to the undirected graph
        for (auto &edge: edges)
        {
            adjList[edge.src].push_back(edge.dest);
            adjList[edge.dest].push_back(edge.src);
        }
    }
};
 
// Perform BFS on graph starting from vertex v
bool BFS(Graph const &graph, int v, int N)
{
    // stores vertex is discovered or not
    vector<bool> discovered(N);
 
    // stores level of each vertex in BFS
    vector<int> level(N);
 
    // mark source vertex as discovered and
    // set its level to 0
    discovered[v] = true, level[v] = 0;
 
    // create a queue to do BFS and enqueue
    // source vertex in it
    queue<int> q;
    q.push(v);
 
    // loop till queue is empty
    while (!q.empty())
    {
        // pop front node from the queue
        v = q.front();
        q.pop();
 
        // do for every edge (v -> u)
        for (int u : graph.adjList[v])
        {
            // if vertex u is explored for first time
            if (!discovered[u])
            {
                // mark it discovered
                discovered[u] = true;
                    // set level as level of parent node + 1
                level[u] = level[v] + 1;
                    // push the vertex into the queue
                q.push(u);
            }
            // if the vertex is already been discovered and
            // level of vertex u and v are same, then the
            // graph contains an odd-cycle & is not biparte
            else if (level[v] == level[u])
                return false;
        }
    }
 
    return true;
}
 
// Determine if a given graph is Bipartite Graph or not
int main()
{
    // vector of graph edges as per above diagram
    vector<Edge> edges = {
        {1, 2}, {2, 3}, {2, 8}, {3, 4}, {4, 6}, {5, 7},
        {5, 9}, {8, 9}
        // if we add 2->4 edge, graph is becomes non-Bipartite
    };
 
    // Number of nodes in the graph
    int N = 10;
 
    // create a graph from edges
    Graph graph(edges, N);
 
    // Do BFS traversal starting from vertex 1
    if (BFS(graph, 1, N))
        cout << "Bipartite Graph";
    else
        cout << "Not a Bipartite Graph";
 
    return 0;
}





// // { Driver Code Starts

// #include<bits/stdc++.h>
// using namespace std;

//  // } Driver Code Ends



// class Solution {
// public:
//     //OM GAN GANAPATHAYE NAMO NAMAH 
//     //JAI SHRI RAM 
//     //JAI BAJRANGBALI 
//     //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
//     struct pairVer 
//     {
//         int s; // current vertice 
//         int level; // current level of the vertice 
//         //we are keeping this to track even - odd length cycle 
//         //even cycle -> common node will be at same level 
//         //odd cycle -> common node will be at different levels
//         pairVer(int s1, int level1)
//         {
//             s = s1;
//             level = level1;
//         }
//     };
	
//     bool compBipartite(vector<int> adj[], int cur, int visited[])
//     {
//         queue<pairVer> q;
//         q.push(pairVer(cur,0));
//         while(!q.empty())
//         {
//             pairVer x = q.front();
//             q.pop();
//             //if already viisted then cycle exists check for the extreme node now
//             //even cycle -> common node will be at same level 
//             //odd cycle -> common node will be at different levels
//             if(visited[x.s] != -1)
//             {
//                 //previous level and current level arent same indicates odd length cycle 
//                 if(x.level != visited[x.s])
//                 return false;
//             }
//             //update to the current level
//             visited[x.s] = x.level;
//             for(int ind : adj[x.s])
//             {
//                 if(visited[ind] == -1)
//                 {
//                     q.push(pairVer(ind, x.level+1));
//                 }
//             }
//         }
//         return true;
//     }
// 	bool isBipartite(int V, vector<int>adj[]){
// 	    // Code here
// 	    //-1 indicates not visited
// 	    int visited[V] = {-1}; // stores the last level
// 	    //checking for all components -> BFS from each vertice will also give the component
// 	    for(int i = 0; i < V; i++)
// 	    {
// 	        if(visited[i] == -1)
// 	        {
// 	            //even if one component is not bipartite then the whole graph wont be
// 	            if(!compBipartite(adj, i, visited))
// 	            return false;
// 	        }
// 	    }
// 	    return true;
// 	}

// };

// // { Driver Code Starts.
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		int V, E;
// 		cin >> V >> E;
// 		vector<int>adj[V];
// 		for(int i = 0; i < E; i++){
// 			int u, v;
// 			cin >> u >> v;
// 			adj[u].push_back(v);
// 			adj[v].push_back(u);
// 		}
// 		Solution obj;
// 		bool ans = obj.isBipartite(V, adj);    
// 		if(ans)cout << "1\n";
// 		else cout << "0\n";  
// 	}
// 	return 0;
// }  // } Driver Code Ends
