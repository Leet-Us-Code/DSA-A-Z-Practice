class Solution
{
  public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    //recursion 
    long long int helper(int deno[], int n, int ind)
    {
        if(n < 0)
        return 0;
        if(n == 0)
        return 1;
        if(ind < 0)
        return 0;
        int inc = helper(deno, n-deno[ind], ind) ;
        int exc = helper(deno, n, ind-1) ;
        return inc + exc;
    }
    long long int count( int S[], int m, int n )
    {
        //return helper(S, n, m-1)
        //DP -> tabulation method 
        long long int dp[m+1][n+1];
        //first col will be 1 
        for(int i = 0; i <= m; i++)
        dp[i][0] = 1;
        //first row will be 0 except the first elemenet 
        for(int i = 1; i <= n; i++)
        dp[0][i] = 0;
        //remaining 
        for(int i = 1; i <= m; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                dp[i][j] = dp[i-1][j]; // not including 
                if(S[i-1] <= j)
                {
                    dp[i][j] += dp[i][j-S[i-1]];
                }
            }
        }
        return dp[m][n];
    }
};
