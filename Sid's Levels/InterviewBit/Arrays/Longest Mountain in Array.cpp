class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool isPeak(vector<int> arr, int i)
    {
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
            return true;
        return false;
    }
    int longestMountain(vector<int>& arr) {
        int longMount = 0;
        int n = arr.size();
        for(int i = 1; i < n-1; i++)
        {
            if(isPeak(arr, i))
            {
                int l = i, r = i; 
                while(l > 0 && arr[l] > arr[l-1])
                    l--;
                while(r < n-1 && arr[r] > arr[r+1])
                    r++;
                longMount = max(longMount, r-l+1);
            }
        }
        return longMount;
    }
};
