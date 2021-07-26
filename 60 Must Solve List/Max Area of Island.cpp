// Hari

int dfs(vector<vector<int>>& grid, int i, int j, int rows, int cols){
        if(i < 0 || i>=rows || j<0 || j>=cols || grid[i][j] != 1 ) return 0;
        grid[i][j] = 2;
        return 1 + dfs(grid, i+1, j, rows, cols) + dfs(grid, i-1, j, rows, cols) + dfs(grid, i, j+1, rows, cols) + dfs(grid, i, j-1, rows, cols); 
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        // fast io
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int rows = grid.size();
        int cols = grid[0].size();
        
        // edge
        int maxArea = 0;
        for(int i = 0; i<rows; i++){
            for(int j = 0; j<cols; j++){
                if(grid[i][j] == 1){
                    maxArea = max(maxArea, dfs(grid, i, j, rows, cols));
                }    
            }
        }
        
        return maxArea;
    }
