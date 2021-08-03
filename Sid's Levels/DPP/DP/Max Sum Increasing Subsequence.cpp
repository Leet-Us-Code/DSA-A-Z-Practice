//Recursive 
class Solution{
		

	public:
	//OM GAN GANAPATHAYE NAMO NAMAH 
	//JAI SHRI RAM 
	//JAI BAJRANGBALI 
	//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
	int helper(int arr[], int ind, int &maxSum)
	{
	    if(ind == 0)
	    {
	        maxSum = max(maxSum, arr[ind]);
	        return arr[ind];
	    }
	    int maxSumTillNow = arr[ind];
	    for(int j = 0; j < ind; j++)
	    {
	        int res = helper(arr, j, maxSum);
	        if(arr[j] < arr[ind])
	        {
	            maxSumTillNow = max(maxSumTillNow, res + arr[ind]);
	        }
	    }
	    maxSum = max(maxSum, maxSumTillNow);
	    return maxSumTillNow;
	}
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    int ind = n - 1;
	    int maxSum = INT_MIN;
	    int x = helper(arr, ind, maxSum);
	    return maxSum;
	}  
};

//DP 
class Solution{
		

	public:
	//OM GAN GANAPATHAYE NAMO NAMAH 
	//JAI SHRI RAM 
	//JAI BAJRANGBALI 
	//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    int lis[n];
	    lis[0] = arr[0];
	    for(int i = 1; i < n; i++)
	    {
	        lis[i] = arr[i];
	        for(int j = 0; j < i; j++)
	        {
	            if(arr[j] < arr[i])
	            {
	                lis[i] = max(lis[i], lis[j] + arr[i]);
	            }
	        }
	    }
	    return *max_element(lis, lis + n);
	}  
};
