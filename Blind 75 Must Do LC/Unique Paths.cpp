// Hari

int uniquePaths(int m, int n) {
        // we do not calculate number of steps at each cell
        // rather we calculate no. of paths we can take to reach that particular cell
        
        // fast io
        ios_base::sync_with_stdio(false);
        // first row and col will have 1 path to reach it
        vector<vector<int>> grid(m, vector<int>(n, 1));
        
        for(int i = 1; i<m; i++){
            for(int j = 1; j<n; j++){
                grid[i][j] = grid[i-1][j] + grid[i][j-1];
            }
        }
        
        return grid[m-1][n-1];
        
    }
