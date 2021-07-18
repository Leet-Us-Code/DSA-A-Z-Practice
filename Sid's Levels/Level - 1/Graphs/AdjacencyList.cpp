// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
public:
	vector<vector<int>>printGraph(int V, vector<int> adj[]){
	    // Code here
	    vector<vector<int>> adjList;
	    for(int i = 0; i < V; i++)
	    {
	        vector<int> temp;
	        temp.push_back(i);
	        for(auto x : adj[i])
	        {
	            temp.push_back(x);
	        }
	        adjList.push_back(temp);
	    }
	    return adjList;
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
		vector<vector<int>>ans=obj.printGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	for(int j=0;j<ans[i].size()-1;j++){
        		cout<<ans[i][j]<<"-> ";
        	}
        	cout<<ans[i][ans[i].size()-1];
        	cout<<endl;
        }
	}
	return 0;
}  // } Driver Code Ends
