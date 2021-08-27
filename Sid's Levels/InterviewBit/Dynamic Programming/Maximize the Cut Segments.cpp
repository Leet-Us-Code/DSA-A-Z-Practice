class Solution
{
    public:
    //Function to find the maximum number of cuts.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        int dp[n+1];
        dp[0] = 0;
        for(int i = 1; i <= n; i++)
        {
            dp[i] = -1;
            int a = -1, b = -1, c = -1;
            if(i >= x)
            a = dp[i-x];
            if(i >= y)
            b = dp[i-y];
            if(i >= z)
            c = dp[i-z];
            dp[i] = max({dp[i], a, b, c});
            if(dp[i] != -1)
            dp[i]++;
        }
        return max(dp[n], 0);
    }
};
