class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	vector<pair<int, int>> in;
    	int plt = 0;
    	int i = 0, j = 0;
    	sort(arr, arr+n);
    	sort(dep, dep+n);
    	int maxP = 0;
    	while(i < n && j < n)
    	{
    	    if(arr[i] <= dep[j])
    	    {
    	        plt++;
    	        i++;
    	    }
    	    else
    	    {
    	        plt--;
    	        j++;
    	    }
    	    maxP = max(maxP, plt);
    	}
    	return maxP;
    }
};
