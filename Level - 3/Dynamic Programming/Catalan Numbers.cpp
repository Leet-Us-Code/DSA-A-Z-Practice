class Solution {
public:
    int numTrees(int n) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BAHDRE NARAYANA
        int dp[n+1];
        dp[0] = 1;
        for(int i = 1; i <= n; i++)
        {
            int x = i - 1;
            int sum = 0;
            for(int j = 0; j <= x; j++)
            {
                sum += dp[j]*dp[x-j];
            }
            dp[i] = sum;
        }
        return dp[n];
    }
};
