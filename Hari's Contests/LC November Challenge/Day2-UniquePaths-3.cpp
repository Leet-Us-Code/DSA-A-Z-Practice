// Hari

// we need to count total no. of 0s and also find out which cell is start point
    int zeroCells = 1, res = 0; // zeroCells starts w 1 to account for start point
    // which is 1 and not 0 
    
    void dfs(vector<vector<int>>& grid, int x, int y, int countZeros){
        // base cases
        if(x < 0 || y < 0 || x >=grid.size() || y>=grid[0].size() || grid[x][y] == -1)
            return;
        
        if(grid[x][y] == 2) {
            if (countZeros == zeroCells)  res += 1;
            return; // we reached destination and all cells w 0 have been visited -> inc. unique path count (res) by 1. Else just return
        }
        
        grid[x][y] = -1; // mark curr cell visited
        
        // dfs
        dfs(grid, x+1, y, countZeros+1);
        dfs(grid, x-1, y, countZeros+1);
        dfs(grid, x, y+1, countZeros+1);
        dfs(grid, x, y-1, countZeros+1);
        
        // backtrack before trying to find new path
        grid[x][y] = 0;
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        // fast
        ios_base::sync_with_stdio(false);
        int start_x, start_y;
        int rows = grid.size(), cols = grid[0].size();
        
        for(int i = 0; i<rows; i++){
            for(int j = 0; j<cols; j++){
                if(grid[i][j] == 1) start_x = i, start_y = j;
                else if(grid[i][j] == 0) zeroCells += 1;
            }
        }
        
        // now do dfs from start
        dfs(grid, start_x, start_y, 0);
        return res;
        
    }
