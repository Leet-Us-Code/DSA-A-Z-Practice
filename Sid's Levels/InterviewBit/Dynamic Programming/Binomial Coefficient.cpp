//Recursive solution 
class Solution{
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LASKHMI NARAYANA, BHADRE NARAYANA
    int nCr(int n, int r){
        // code here
        if(r > n)
        return 0;
        if(n == 0 || r == 0)
        return 1;
        return nCr(n-1, r-1) + nCr(n-1, r);
    }
};

//DP (tabulation) 
class Solution{
public:
//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int high = 1000000007;
    int nCr(int n, int r){
        // code here
        int dp[n+1][r+1];
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= r; j++)
            {
                if(i < j)
                dp[i][j] = 0;
                else if(j == 0)
                dp[i][j] = 1;
                else 
                dp[i][j] = (dp[i-1][j-1]%high + dp[i-1][j]%high)%high;
            }
        }
        return dp[n][r];
    }
};
