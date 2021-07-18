class Solution {
public:
    int minCut(string s) {
        //OM GAN GANAPATHAYE NAMO NAMAHA
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int n = s.length();
        int cut[n]; // cut[0..i] -> cuts for string of length i
        bool palindrome[n][n];
        memset(palindrome, false, sizeof(palindrome));
        for(int i = 0; i < n; i++)
        {
            int minCut = i; // for a string of length i maximimum number of palindromic partitions will be i
            for(int j = 0; j <= i; j++)
            {
                if(s[i] == s[j] && (i - j < 2 || palindrome[j+1][i-1]))
                {
                    palindrome[j][i] = true;
                    if(j == 0)
                        minCut = min(minCut, 0);
                    else
                        minCut = min(minCut, cut[j-1] + 1);
                }
            }
            cut[i] = minCut;
        }
        int res = cut[n-1];
        return res;
    }
};
