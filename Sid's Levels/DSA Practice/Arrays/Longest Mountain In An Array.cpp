class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool isPeak(vector<int> arr, int i)
    {
        int n = arr.size();
        if(i == 0 || i == n-1)
            return false;
        else if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
            return true;
        else
            return false;
    }
    int longestMountain(vector<int>& arr) {
        int maxRange = 0;
        int n = arr.size();
        for(int i = 0; i < n; i++)
        {
            if(isPeak(arr, i))
            {
                int l = i, r = i;
                while(l > 0 && arr[l] > arr[l-1])
                    l--;
                while(r < n-1 && arr[r] > arr[r+1])
                    r++;
                maxRange = max(maxRange, r-l+1);
            }
        }
        return maxRange;
    }
};
