// Hari

int numIslands(vector<vector<char>>& grid) {
        // fast
        ios_base::sync_with_stdio(false);

        // edge cases
        if (grid.size() == 0) return 0;
        int countIslands = 0;

        // DFS from top left 
        for(int i = 0; i<grid.size(); i++) {
            for(int j = 0; j<grid[0].size(); j++) {
                // Pick the element (if == 1) and run DFS on it to find all near nodes to form island
                if (grid[i][j] == '1') {
                    countIslands += 1; // increment island count. All near nodes which are 1 will be marked visited
                    dfs(grid, i, j);
                }
            }

        }

        return countIslands; 
    }

    void dfs(vector<vector<char>>& grid, int i, int j) {
        // edge cases
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] != '1') {
            return; 
        }

        // Mark this node as visited - "2"
        grid[i][j] = '2'; 

        // Check both vertically and horizontally 
        dfs(grid, i-1, j); // Up
        dfs(grid, i+1, j); // Down 
        dfs(grid, i, j-1); // Left 
        dfs(grid, i, j+1); // Right
    }
