class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        //this problem is really similiar to knapsack problem 
        int l = strs.size();
        int dp[l+1][m+1][n+1];
        memset(dp, 0, sizeof(dp));
        for(int i = 0; i < l+1; i++)
        {
            for(int j = 0; j < m+1; j++)
            {
                for(int k = 0; k < n+1; k++)
                {
                    if(i == 0)
                    {
                        dp[i][j][k] = 0;
                    }
                    else
                    {
                        //not including 
                        int c1 = dp[i-1][j][k];
                        //if including 
                        //counting number of zeroes and ones 
                        int zeroes = 0, ones = 0;
                        for(int x = 0; x < strs[i-1].length(); x++)
                        {
                            if(strs[i-1][x] == '1')
                                ones++;
                            else
                                zeroes++;
                        }
                        int c2 = 0;
                        if(ones <= k && zeroes <= j)
                        {
                            c2 = dp[i-1][j-zeroes][k-ones] + 1;
                        }
                        dp[i][j][k] = max(c1, c2);
                    }
                }
            }
        }
        return dp[l][m][n];
    }
};
