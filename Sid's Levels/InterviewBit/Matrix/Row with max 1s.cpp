class Solution{
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int search(vector<int> arr)
    {
        int l = 0, r = arr.size()-1;
        int ans = -1;
        while(r >= l)
        {
            int mid = (r + l)/2;
            if(arr[mid] == 1)
            {
                ans = mid;
                r = mid - 1;
            }
            else 
            {
                l = mid + 1;
            }
        }
        return ans;
    }
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int row = -1;
	    int minEle = INT_MAX; // the index of first occurrence of 1 should be minimum 
	    for(int i = 0; i < n; i++)
	    {
	        int ind = search(arr[i]);
	        if(ind != -1 && minEle > ind)
	        {
	            minEle = ind;
	            row = i;
	        }
	    }
	    return row;
	}

};
