class Solution {
public:
    int binarySearch(vector<int> nums, int l, int r, int target)
    {
        while(l <= r)
        {
            int mid = (l + r)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int n = nums.size();
        int s = 0, e = n - 1;
        int ans = -1;
        while(s <= e)
        {
            int mid = (s + e)/2;
            if(nums[mid] > nums[n-1])
            {
                s = mid + 1;
            }
            else
            {
                ans = mid;
                e = mid - 1;
            }
        }
        if(ans == -1)
        {
            return binarySearch(nums, 0, n-1, target);
        }
        else
        {
            int x = binarySearch(nums, 0, ans-1, target);
            int y = binarySearch(nums, ans, n-1, target);
            return max(x,y);
        }
    }
};
