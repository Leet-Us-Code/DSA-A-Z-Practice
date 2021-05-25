class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        //OM NAMO NARAYANAYA
        int lcs[1000][1000];
        int m = text1.size();
        int n = text2.size();
        for(int i = 0; i < m+1; i++)
        {
            for(int j = 0; j < n+1; j++)
            {
                lcs[i][j] = 0;
            }
        }
        for(int i = 0; i < m+1; i++)
        {
            for(int j = 0; j < n+1; j++)
            {
                if(i == 0 || j == 0)
                    continue;
                else
                {
                    if(text1[i-1] == text2[j-1])
                    {
                        lcs[i][j] = lcs[i-1][j-1] + 1;
                    }
                    else
                    {
                        lcs[i][j] = max(lcs[i][j-1], lcs[i-1][j]);
                    }
                }
            }
        }
        return lcs[m][n];
    }
};
