class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool isPeak(vector<int> arr, int ind)
    {
        int n = arr.size();
        if(ind == 0 || ind == n-1)
            return false;
        else if(arr[ind] > arr[ind+1] && arr[ind] > arr[ind-1])
            return true;
        return false;
    }
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int maxRange = 0;
        for(int i = 0; i < n; i++)
        {
            if(isPeak(arr, i))
            {
                int l = i, r = i;
                while(l > 0 && arr[l] > arr[l-1])
                    l--;
                while(r < n-1 && arr[r] > arr[r+1])
                    r++;
                maxRange = max(r-l+1, maxRange);
            }
        }
        return maxRange;
    }
};
