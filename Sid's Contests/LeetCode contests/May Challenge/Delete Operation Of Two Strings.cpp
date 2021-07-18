class Solution {
public:
    int minDistance(string word1, string word2) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int length = 0; // length of longest common subsequence 
        int m = word1.length();
        int n = word2.length();
        int LCS[m+1][n+1];//longest common subsequence matrix -> LCS[i][j] = stores the longest common subsequence of word1[0...i-1] && word2[0...j-1]
        for(int i = 0; i <= m; i++)
        {
            for(int j = 0; j <= n; j++)
            {
                if(i == 0 || j == 0) //it will be zero obviously 
                {
                    LCS[i][j] = 0;
                }
                else if(word1[i-1] == word2[j-1])
                {
                    LCS[i][j] = LCS[i-1][j-1] + 1;
                }
                else
                {
                    LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]);
                }
            }
        }
        length = LCS[m][n];
        int res = (n - length) + (m - length);
        return res;
    }
};
