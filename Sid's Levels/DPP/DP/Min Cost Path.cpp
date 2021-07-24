class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int dp[m][n];
        dp[0][0] = grid[0][0];
        //first row will be the cumulative sum
        for(int i = 1; i < n; i++)
        {
            dp[0][i] = dp[0][i-1] + grid[0][i];
        }
        //similiarly for the first column 
        for(int i = 1; i < m; i++)
        {
            dp[i][0] = dp[i-1][0] + grid[i][0];
        }
        //populate the rest of the matrix
        for(int i = 1; i < m; i++)
        {
            for(int j = 1; j < n; j++)
            {
                dp[i][j] = grid[i][j] + min(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[m-1][n-1];
    }
};
