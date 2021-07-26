// Hari

void dfs(vector<vector<char>>& grid, int i, int j){
        // edge cases 
        if(i < 0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j] != '1' ) return;
        
        // if it is a valid cell, then make it '2' and recurse through its adjacents
        grid[i][j] = '2';
        // horizontally or vertically -> check all 4 directions
        dfs(grid, i-1, j);
        dfs(grid, i+1, j);
        dfs(grid, i, j-1);
        dfs(grid, i, j+1);
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        // faster IO
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        // 0 -> water 1->land 2 -> visited land (can also use 0)
        
        // edge cases
        if(grid.size() == 0) return 0;
        int countIsland = 0;
        
        //traversal of grid
        for(int i = 0; i<grid.size(); i++){
            for(int j = 0; j<grid[0].size(); j++){
                // if cell is 1 -> call dfs from this cell
                if(grid[i][j] == '1') {
                    dfs(grid, i, j);
                    countIsland += 1; // to avoid counting all 1 as diff islands, count the starting 1 as an island, dfs traverse it and change all other 
                  // 1s near it that qualify as island. All the island components would become '2'
                }
            }
        }
        return countIsland;
        
    }
