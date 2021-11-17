// Hari

int uniquePaths(int m, int n) {
        // we do not calculate number of steps at each cell
        // rather we calculate no. of paths we can take to reach that particular cell
        
        // fast io
        ios_base::sync_with_stdio(false); cin.tie(NULL);
        // we make all cells in 0th row and col as 1 as there is only 1 path to reach
        // them (either move right (row) or keep moving down (col))
        vector<vector<int>> grid(m, vector<int>(n, 1));
        
        for(int i = 1; i<m; i++){
            for(int j = 1; j<n; j++){
                grid[i][j] = grid[i-1][j] + grid[i][j-1]; // not steps calculation so no doing +1 or max(grid[i-1][j] , grid[i][j-1])
            }
        }
        
        return grid[m-1][n-1]; // # of unique paths to reach "finish" cell
    }
