class Solution {
public:
    int minDistance(string word1, string word2) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int n = word1.length();
        int m = word2.length();
        int dp[m+1][n+1];
        //make the value of first row equal to the col number 
        for(int i = 0; i <= n; i++)
            dp[0][i] = i;
        //same for the first column 
        for(int i = 0; i <= m; i++)
            dp[i][0] = i;
        //populate the rest of the 2d array 
        for(int i = 1; i <= m; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(word2[i-1] == word1[j-1])
                    dp[i][j] = dp[i-1][j-1];
                else 
                {
                    int replace = dp[i-1][j-1];
                    int deleteChar = dp[i-1][j];
                    int insertChar = dp[i][j-1];
                    dp[i][j] = 1 + min(replace, min(deleteChar, insertChar));
                }
            }
        }
        return dp[m][n];
    }
};

//space optimized solution using two arrays
class Solution {
public:
    int minDistance(string word1, string word2) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int n = word1.length();
        int m = word2.length();
        int dp[2][n+1];
        //make the value of first row equal to the col number 
        for(int i = 0; i <= n; i++)
            dp[0][i] = i;
        //same for the first column 
        
        //populate the rest of the 2d array 
        for(int i = 1; i <= m; i++)
        {
            for(int j = 0; j <= n; j++)
            {
                //if the length of string 1 is zero then add all the chars 
                //since this deals with col we will be doing it inside the for loop 
                if(j == 0)
                    dp[i%2][j] = i;
                else if(word2[i-1] == word1[j-1])
                    dp[i%2][j] = dp[(i-1)%2][j-1];
                else 
                {
                    int replace = dp[(i-1)%2][j-1];
                    int deleteChar = dp[(i-1)%2][j];
                    int insertChar = dp[i%2][j-1];
                    dp[i%2][j] = 1 + min(replace, min(deleteChar, insertChar));
                }
            }
        }
        return dp[m%2][n];
    }
};
