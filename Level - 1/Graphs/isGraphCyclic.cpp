// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
public:
    bool BFS(vector<int> adj[], int V, int src)
    {
        bool visited[V] = {false};
        queue<int> q;
        q.push(src);
        while(!q.empty())
        {
            int x = q.front();
            q.pop();
            //if the node was already visited
            if(visited[x] == true)
            return true;
            else
            {
                visited[x] = true;
                for(int ind : adj[x])
                {
                    if(visited[ind] == false)
                    {
                        q.push(ind);
                    }
                }
            }
        }
        return false;
    }
	bool isCycle(int V, vector<int>adj[]){
	    // Code here
	    //OM GAN GANAPATHAYE NAMO NAMAH 
	    //JAI SHRI RAM 
	    //JAI BAJRANGBALI 
	    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
	    for(int i = 0; i < V; i++)
	    {
	        if(BFS(adj, V, i))
	        {
	            return true;
	        }
	    }
	    return false;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isCycle(V, adj);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}  // } Driver Code Ends
