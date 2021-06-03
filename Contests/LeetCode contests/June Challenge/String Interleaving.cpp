class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int m = s1.length();
        int n = s2.length();
        int dp[m+1][n+1];
        if(m + n != s3.length())
            return false;
        memset(dp, false, sizeof(dp));
        for(int i = 0; i <= m; i++)
        {
            for(int j = 0; j <= n; j++)
            {
                if(i == 0 && j == 0)
                    dp[i][j] = true;
                else if(i == 0)
                {
                    if(s2[j-1] == s3[j-1])
                        dp[i][j] = dp[i][j-1];
                }
                else if(j == 0)
                {
                    if(s1[i-1] == s3[i-1])
                        dp[i][j] = dp[i-1][j];
                }
                else if(s1[i-1] == s3[i+j-1] && s2[j-1] != s3[i+j-1])
                    dp[i][j] = dp[i-1][j];
                else if(s2[j-1] == s3[i+j-1] && s1[i-1] != s3[i+j-1])
                    dp[i][j] = dp[i][j-1];
                else if(s2[j-1] == s3[i+j-1] && s1[i-1] == s3[i+j-1])
                    dp[i][j] = dp[i][j-1] | dp[i-1][j];
            }
        }
        return dp[m][n];
    }
};
