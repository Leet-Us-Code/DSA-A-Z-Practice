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
