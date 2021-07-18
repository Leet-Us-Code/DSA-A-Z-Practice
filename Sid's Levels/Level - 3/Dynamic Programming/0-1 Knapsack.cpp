
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       //OM GAN GANAPATHAYE NAMO NAMAH 
       //JAI SHRI RAM 
       //JAI BAJRANGBALI 
       //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
       int dp[1000][1000];
       for(int i = 0; i <= n; i++)
       {
           for(int j = 0; j <= W; j++)
           dp[i][j] = 0;
       }
       for(int i = 1; i <= n; i++)
       {
           for(int j = 1; j <= W; j++)
           {
               //not including 
               dp[i][j] = dp[i-1][j];
               if(wt[i-1] <= j)
               {
                   //including 
                   int incl = val[i-1] + dp[i-1][j - wt[i-1]];
                   dp[i][j] = max(dp[i][j], incl);
               }
           }
       }
       int res = 0;
       for(int i = 0; i <= n; i++)
       {
           res = max(res, dp[i][W]);
       }
       return res;
    }
};
