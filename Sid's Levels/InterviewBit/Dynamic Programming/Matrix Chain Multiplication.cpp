// Recursive 
class Solution{
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int helper(int arr[], int i, int j)
    {
        if(i == j)
        return 0;
        int count, minOp = INT_MAX, k;
        for(k = i; k < j; k++)
        {
            count = helper(arr, i, k) + helper(arr, k+1, j) + arr[i-1]*arr[k]*arr[j];
            minOp = min(minOp, count);
        }
        return minOp;
    }
    int matrixMultiplication(int n, int arr[])
    {
        // code here
        return helper(arr, 1, n-1);
    }
}; 

//DP (tabulation) 
class Solution{
public:
//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int matrixMultiplication(int n, int arr[])
    {
        // code here
        int dp[n][n];
        for(int i = 1; i < n; i++)
        {
            dp[i][i] = 0;
        }
        for(int l = 2; l < n; l++)
        {
            //i is start 
            for(int i = 1; i < n-l+1; i++)
            {
                int j = i + l - 1; // j is the end 
                dp[i][j] = INT_MAX;
                for(int k = i; k < j; k++)
                {
                    int count = dp[i][k] + dp[k+1][j] + arr[i-1]*arr[k]*arr[j];
                    dp[i][j] = min(dp[i][j], count);
                }
            }
        }
        return dp[1][n-1];
    }
};
