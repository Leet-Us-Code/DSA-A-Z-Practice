//Recursive 
class Solution
{
    public:
    //Function to find the nth catalan number.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int findCatalan(int n) 
    {
        //code here
        if(n <= 0)
        return 1;
        int res = 0;
        for(int i = 0; i < n; i++)
        {
            res += findCatalan(i)*findCatalan(n-1-i);
        }
        return res;
    }
};

//DP (tabulation) 
class Solution
{
    public:
    //Function to find the nth catalan number.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int high = 1000000007;
    int findCatalan(int n) 
    {
        //code here
        int dp[n+1];
        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2; i <= n; i++)
        {
            dp[i] = 0;
            for(int j = 0; j < i; j++)
            {
                dp[i] = (dp[i]%high + ((dp[j]%high)*(dp[i-j-1]%high))%high)%high;
            }
        }
        return dp[n];
    }
};
