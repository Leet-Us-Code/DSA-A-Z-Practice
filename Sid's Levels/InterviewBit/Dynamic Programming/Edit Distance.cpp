// Recursive code 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int helper(string s1, int m, string s2, int n)
    {
        if(m == 0)
            return n;
        if(n == 0)
            return m;
        if(s1[m-1] == s2[n-1])
            return helper(s1, m-1, s2, n-1);
        int ins = helper(s1, m, s2, n-1) + 1;
        int del = helper(s1, m-1, s2, n) + 1;
        int rep = helper(s1, m-1, s2, n-1) + 1;
        return  min({ins, del, rep});
    }
    int minDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        return helper(word1, m, word2, n);
    }
};

//DP (tabulation) 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LASKHMI NARAYANA, BHADRE NARAYANA
    int minDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        int dp[m+1][n+1];
        for(int i = 0; i <= m; i++)
            dp[i][0] = i;
        for(int i = 0; i <= n; i++)
            dp[0][i] = i;
        for(int i = 1; i <= m; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(word1[i-1] == word2[j-1])
                    dp[i][j] = dp[i-1][j-1];
                else 
                {
                    int ins = dp[i][j-1] + 1;
                    int del = dp[i-1][j] + 1;
                    int rep = dp[i-1][j-1] + 1;
                    dp[i][j] = min({ins, del, rep});
                }
            }
        }
        return dp[m][n];
    }
};
