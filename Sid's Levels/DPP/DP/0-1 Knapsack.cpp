//Recursive solution 
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int helper(int w, int wt[], int val[], int ind)
    {
        if(w == 0)
        return 0;
        if(ind < 0)
        return 0;
        int x = val[ind] + helper(w-wt[ind], wt, val, ind-1);
        int y = helper(w, wt, val, ind-1);
        if(wt[ind] > w)
        return y;
        else
        return max(x, y);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       return helper(W, wt, val, n-1);
    }
};

//DP solution 
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
       vector<vector<int>> dp(n+1, vector<int>(w+1, 0));
       //1st row and 1st col will be 0 
       for(int i = 1; i <= n; i++)
       {
           for(int j = 1; j <= w; j++)
           {
               //dont include
               dp[i][j] = dp[i-1][j];
               //if can be included 
               if(wt[i-1] <= j)
               {
                   dp[i][j] = max(dp[i][j], val[i-1] + dp[i-1][j-wt[i-1]]);
               }
           }
       }
       //max element in last row 
       int maxEle = INT_MIN;
       for(int i = 0; i <= w; i++)
       maxEle = max(maxEle, dp[n][i]);
       return maxEle;
    }
};
