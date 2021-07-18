public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    long int high = 1000000007;
    int nCr(int n, int r){
        // code here
        if(r > n)
        return 0;
        int dp[r+1][n+1];
        dp[0][0] = 1;
        //first row is 1 
        for(int i = 0; i <= n; i++)
        dp[0][i] = 1;
        //first column except first row is 0 
        for(int i = 1; i <= r; i++)
        dp[i][0] = 0;
        for(int i = 1; i <= r; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                dp[i][j] = ((dp[i-1][j-1]%high) + (dp[i][j-1]%high))%high;
            }
        }
        return dp[r][n];
    }
};
