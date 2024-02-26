// Hari

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        // fast
        ios_base::sync_with_stdio(false);

        int maxArea = 0; 

        for(int i = 0; i<grid.size(); i++) {
            for(int j= 0; j<grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    int currArea = dfs(grid, i, j);
                    maxArea = max(maxArea, currArea);
                }
            }
        }

        return maxArea;
    }

    int dfs(vector<vector<int>>& grid, int i, int j) {
        // edge cases 
        if (i < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != 1) return 0;

        if (grid[i][j] == 1) {
            // valid node. Now do dfs for all 4 directions 
            grid[i][j] = 2; // mark as visited
            return 1 + dfs(grid, i - 1, j) + dfs(grid, i + 1, j) + dfs(grid, i, j - 1) + dfs(grid, i, j + 1); 
        }

        return 0;
    }
};
