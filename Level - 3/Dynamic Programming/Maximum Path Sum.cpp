class Solution{
public:
    int maximumPath(int N, vector<vector<int>> matrix)
    {
        // code here
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m, vector<int>(n, INT_MIN));
        //copy the first row 
        for(int i = 0; i < n; i++)
            dp[0][i] = matrix[0][i];
        //populate the remaining part 
        for(int i = 1; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(j == 0)
                {
                    dp[i][j] = matrix[i][j] + max(dp[i-1][j], dp[i-1][j+1]);
                }
                else if(j == n-1)
                {
                    dp[i][j] = matrix[i][j] + max(dp[i-1][j], dp[i-1][j-1]);
                }
                else 
                {
                    dp[i][j] = matrix[i][j] + max(dp[i-1][j], max(dp[i-1][j-1], dp[i-1][j+1]));
                }
            }
        }
        int maxSum = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            maxSum = max(maxSum, dp[m-1][i]);
        }
        return maxSum;
    }
};
