class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int sum = arr[0];
        int maxSum = arr[0];
        for(int i = 1; i < n; i++)
        {
            sum = max(arr[i], sum + arr[i]);
            maxSum = max(maxSum, sum);
        }
        
        return maxSum;
    }
};
