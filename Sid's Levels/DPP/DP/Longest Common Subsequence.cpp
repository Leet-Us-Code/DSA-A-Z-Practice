class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        int lcs[m+1][n+1];
        //1st row will be 0
        for(int i = 0; i <= n; i++)
        {
            lcs[0][i] = 0;
        }
        //1st col will be 0 
        for(int i = 0; i <= m; i++)
        {
            lcs[i][0] = 0;
        }
        for(int i = 1; i <= m; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(text2[i-1] == text1[j-1])
                    lcs[i][j] = lcs[i-1][j-1] + 1;
                else
                    lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
            }
        }
        return lcs[m][n];
    }
};
