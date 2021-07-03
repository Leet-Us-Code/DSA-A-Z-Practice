class Solution{
public:
    int maxGold(int m, int n, vector<vector<int>> M)
    {
        // code here//OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int dp[n + 1][m + 1];
        memset(dp, 0, sizeof(dp));
        for (int j = m - 1; j >= 0; j--) {
        for (int i = 0; i < n; i++) {
        if (j == m - 1) // last column
        dp[i][j] = M[i][j];
        else if (i == 0) //first row
        dp[i][j] = M[i][j] + max(dp[i][j + 1], dp[i + 1][j + 1]);
        else if (i == n - 1) // last row
        dp[i][j] = M[i][j] + max(dp[i][j + 1], dp[i - 1][j + 1]);
        else // all other cases
        dp[i][j] = M[i][j] + max(dp[i][j + 1], max(dp[i - 1][j + 1], dp[i + 1][j + 1]));
        }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
        ans = max(ans, dp[i][0]);
        }
        return ans;
    }
};
