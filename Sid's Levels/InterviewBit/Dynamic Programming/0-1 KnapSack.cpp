//Recursive implementation 
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       if(W <= 0)
       return 0;
       if(n <= 0)
       return 0;
       int inc = val[n-1] + knapSack(W - wt[n-1], wt, val, n-1);
       int exc = knapSack(W, wt, val, n-1);
       if(wt[n-1] > W)
       return exc;
       return max(inc, exc);
    }
};

//Dp (tabulation) 
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int knapSack(int w, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>> dp(n+1, vector<int> (w+1, 0));
       //first row and col will be 0 only 
       for(int i = 1; i <= n; i++)
       {
           for(int j = 1; j <= w; j++)
           {
               int exc = dp[i-1][j];
               dp[i][j] = exc;
               //check if it can be included 
               if(wt[i-1] <= j)
               {
                   int inc = val[i-1] + dp[i-1][j - wt[i-1]];
                   dp[i][j] = max(inc, dp[i][j]);
               }
           }
       }
       //maximum in the last row 
       int maxEle = INT_MIN;
       for(int i = 0; i <= w; i++)
       {
           maxEle = max(maxEle, dp[n][i]);
       }
       return maxEle; // same as returning dp[n][w];
    }
};
