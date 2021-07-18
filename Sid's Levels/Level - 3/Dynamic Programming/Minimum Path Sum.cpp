class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int m = grid.size();
        int n = grid[0].size();
        int dp[m][n];//dp[i][j] -> minimum sum to reach (i,j) from (0,0)
        //first row will hence be the continuous sum 
        dp[0][0] = grid[0][0];
        for(int i = 1; i < n; i++)
        {
            dp[0][i] = dp[0][i-1] + grid[0][i];
        }
        //first column will hence also be the continuous sum 
        for(int i = 1; i < m; i++)
        {
            dp[i][0] = dp[i-1][0] + grid[i][0];
        }
        for(int i = 1; i < m; i++)
        {
            for(int j = 1; j < n; j++)
            {
                int x = dp[i-1][j]; // coming to (i,j) while travelling down 
                int y = dp[i][j-1]; // comimg to (i,j) while travelling right 
                dp[i][j] = grid[i][j] + min(x,y);
            }
        }
        return dp[m-1][n-1];
    }
};
