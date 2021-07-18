// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
public:
    void DFS(vector<int> adj[], vector<int> &dfs, bool visited[], int src)
    {
        
        visited[src] = true;
        dfs.push_back(src);
        for(auto x : adj[src])
        {
            if(visited[x] == false)
            {
                DFS(adj, dfs, visited, x);
            }
        }
    }
	vector<int>dfsOfGraph(int V, vector<int> adj[]){
	    // Code here
	    //OM GAN GANAPATHAYE NAMO NAMAH 
	    //JAI SHRI RAM 
	    //JAI BAJRANGBALI 
	    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
	    bool visited[V] = {false};
	    vector<int> dfs;
	    DFS(adj, dfs, visited, 0);
	    return dfs;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.dfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
