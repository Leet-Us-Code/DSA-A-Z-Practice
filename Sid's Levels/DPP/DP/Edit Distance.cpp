// Recursive 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int editDistance(string word1, string word2, int m, int n)
    {
        if(m == 0)
            return n;
        if(n == 0)
            return m;
        if(word1[m-1] == word2[n-1])
            return editDistance(word1, word2, m-1, n-1);
        int replace = editDistance(word1, word2, m-1, n-1) + 1;
        int delete1 = editDistance(word1, word2, m-1, n) + 1;
        int add = editDistance(word1, word2, m, n-1) + 1;
        return min({replace, delete1, add});
    }
    int minDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        return editDistance(word1, word2, m, n);
    }
};

//DP 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int minDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        vector<vector<int>> dp(m+1, vector<int>(n+1));
        //1st row m == 0 then the values will be n 
        for(int i = 0; i <= n; i++)
        {
            dp[0][i] = i;
        }
        //1st column n == 0 then the values will be m
        for(int i = 0; i <= m; i++)
        {
            dp[i][0] = i;
        }
        //populating the rest of the dp matrix 
        for(int i = 1; i <= m; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(word1[i-1] == word2[j-1])
                    dp[i][j] = dp[i-1][j-1];
                else
                {
                    int insert = dp[i][j-1] + 1;
                    int remove = dp[i-1][j] + 1;
                    int replace = dp[i-1][j-1] + 1;
                    dp[i][j] = min({insert, remove, replace});
                }
            }
        }
        return dp[m][n];
    }
};
