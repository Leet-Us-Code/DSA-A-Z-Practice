int countFriendsPairings(int n) 
{ 
    // code here
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int dp[n+1];
    long m = pow(10, 9) + 7;
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3; i <= n; i++)
    {
        dp[i] = ((dp[i-1]%m) + ((i-1)%m)*(dp[i-2]%m))%m;
    }
    return dp[n];
}
