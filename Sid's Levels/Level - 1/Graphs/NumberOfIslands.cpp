// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
public:
    void connected(vector<vector<char>> grid, int i, int j, vector<vector<bool>> &visited, int m, int n)
    {
        if(i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == '0' || visited[i][j] == true)
        return;
        else 
        {
            visited[i][j] = true;
            connected(grid, i+1, j, visited, m, n);
            connected(grid, i-1, j, visited, m, n);
            connected(grid, i, j+1, visited, m, n);
            connected(grid, i, j-1, visited, m, n);
            connected(grid, i-1, j-1, visited, m, n);
            connected(grid, i-1, j+1, visited, m, n);
            connected(grid, i+1, j-1, visited, m, n);
            connected(grid, i+1, j+1, visited, m, n);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> visited;
        for(int i = 0; i < grid.size(); i++)
        {
            vector<bool> temp;
            for(int j = 0; j < grid[i].size(); j++)
            {
                temp.push_back(false);
            }
            visited.push_back(temp);
            temp.clear();
        }
        int count = 0;
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[i].size(); j++)
            {
                if(grid[i][j] == '1' && visited[i][j] == false)
                {
                    connected(grid, i, j, visited, m, n);
                    count++;
                }
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.numIslands(grid);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends
