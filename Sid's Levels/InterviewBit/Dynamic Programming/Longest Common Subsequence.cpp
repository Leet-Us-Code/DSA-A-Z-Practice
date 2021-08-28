//Recursive code 
class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        if(x == 0 || y == 0)
        return 0;
        if(s1[x-1] == s2[y-1])
        return lcs(x-1, y-1, s1, s2) + 1;
        else 
        {
            int a = lcs(x-1, y, s1, s2);
            int b = lcs(x, y-1, s1, s2);
            return max(a, b);
        }
    }
};

//DP (tabulation) 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        int dp[m+1][n+1];
        for(int i = 0; i <= m; i++)
            dp[i][0] = 0;
        for(int i = 0; i <= n; i++)
            dp[0][i] = 0;
        for(int i = 1; i <= m; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(text1[i-1] == text2[j-1])
                    dp[i][j] = dp[i-1][j-1] + 1;
                else 
                {
                    int a = dp[i-1][j];
                    int b = dp[i][j-1];
                    dp[i][j] = max(a, b);
                }
            }
        }
        return dp[m][n];
    }
};
