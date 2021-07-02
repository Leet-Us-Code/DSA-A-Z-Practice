class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    
    int getMax(vector<vector<int>> &grid, int i, int j, int m, int n, vector<vector<bool>> &visited)
    {
        if(i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 0 || visited[i][j])
            return false;
        int sum = 0;
        visited[i][j] = true;
        int x = getMax(grid, i+1, j, m, n, visited);
        int y = getMax(grid, i-1, j, m, n, visited);
        int z = getMax(grid, i, j+1, m, n, visited);
        int w = getMax(grid, i, j-1, m, n, visited);
        sum += grid[i][j] + max({x, y, z, w});
        visited[i][j] = false;
        return sum;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int maxSum = INT_MIN;
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] != 0)
                {
                    int x = getMax(grid, i, j, m, n, visited);
                    maxSum = max(maxSum, x);
                }
            }
        }
        return maxSum;
    }
};
