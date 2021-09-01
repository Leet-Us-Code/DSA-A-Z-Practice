class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int findPiv(vector<int> nums)
    {
        int n = nums.size();
        int l = 0, r = n-1;
        int ans = -1;
        while(r >= l)
        {
            int mid = (l + r)/2;
            if(nums[mid] <= nums[n-1])
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        return ans;
    }   
    int searchEle(vector<int> nums, int l, int r, int x)
    {
        while(r >= l)
        {
            int mid = (r + l)/2;
            if(nums[mid] == x)
                return mid;
            else if(nums[mid] > x)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int pivot = findPiv(nums);
        if(pivot == -1)
            return -1;
        int n = nums.size();
        int ans1 = -1, ans2 = -1;
        ans1 = searchEle(nums, 0, pivot-1, target);
        ans2 = searchEle(nums, pivot, n-1, target);
        if(ans1 == -1 && ans2 == -1)
            return -1;
        else
            return max(ans1, ans2);
    }
};
