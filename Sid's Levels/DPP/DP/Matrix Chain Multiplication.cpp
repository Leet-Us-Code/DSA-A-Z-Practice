//Recursive 
class Solution{
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int helper(int arr[], int i, int j) // returns minimum operations for maatrix chain [i..j]
    {
        if(i == j)
        return 0;
        int minOp = INT_MAX; // minimum operations
        for(int k = i; k < j; k++)
        {
            int op = helper(arr, i, k) + helper(arr, k+1, j) + arr[i-1]*arr[k]*arr[j];
            minOp = min(minOp, op);
        }
        return minOp;
    }
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        return helper(arr, 1, N-1);
    }
};

//DP 
class Solution{
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int matrixMultiplication(int n, int arr[])
    {
        // code here
        int dp[n][n]; // dp[i][j] = min operations for arr[i...j]
        for(int i = 0; i < n; i++)
        dp[i][i] = 0; // matrix of size 1
        for(int l = 2; l < n; l++)
        {
            for(int i = 1; i < n-l+1; i++)
            {
                int j = i + l - 1;
                dp[i][j] = INT_MAX;
                for(int k = i; k < j; k++)
                {
                    int op = dp[i][k] + dp[k+1][j] + arr[i-1]*arr[k]*arr[j];
                    dp[i][j] = min(dp[i][j], op);
                }
            }
        }
        return dp[1][n-1];
    }
};
