//Recursive 
class Solution
{
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LASKHMI NARAYANA, BHADRE NARAYANA
    int countFriendsPairings(int n) 
    { 
        // code here
        if(n == 1 || n == 2)
        return n;
        return countFriendsPairings(n-1) + (n-1)*countFriendsPairings(n-2);
    }
};   

//DP(tabulation) 
class Solution
{
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    long int mod = pow(10, 9) + 7;
    int countFriendsPairings(int n) 
    { 
        // code here
        int dp[n+1];
        dp[0] = 0; // not required 
        dp[1] = 1;
        dp[2] = 2;
        for(int i = 3; i <= n; i++)
        dp[i] = (dp[i-1]%mod + ((i-1)%mod)*(dp[i-2]%mod)%mod)%mod;
        return dp[n];
    }
};    
