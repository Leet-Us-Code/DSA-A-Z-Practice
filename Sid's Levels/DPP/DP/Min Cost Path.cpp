// Recursive 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int helper(vector<vector<int>> &grid, int i, int j)
    {
        int m = grid.size();
        int n = grid[0].size();
        if(i == m || j == n)
            return INT_MAX;
        if(i == m-1 && j == n-1)
            return grid[i][j];
        int x1 = helper(grid, i+1, j);
        int x2 = helper(grid, i, j+1);
        return min(x1, x2) + grid[i][j];
    }
    int minPathSum(vector<vector<int>>& grid) {
        return helper(grid, 0, 0);
    }
};

//DP (tabulation)
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n));
        //last ele 
        dp[m-1][n-1] = grid[m-1][n-1];
        //last col 
        for(int i = m-2; i >= 0; i--)
        {
            dp[i][n-1] = grid[i][n-1] + dp[i+1][n-1];
        }
        //last row 
        for(int i = n-2; i >= 0; i--)
        {
            dp[m-1][i] = grid[m-1][i] + dp[m-1][i+1];
        }
        //remaining 
        for(int i = m-2; i >= 0; i--)
        {
            for(int j = n-2; j >= 0; j--)
            {
                dp[i][j] = min(dp[i+1][j], dp[i][j+1]) + grid[i][j];
            }
        }
        return dp[0][0];
    }
};
