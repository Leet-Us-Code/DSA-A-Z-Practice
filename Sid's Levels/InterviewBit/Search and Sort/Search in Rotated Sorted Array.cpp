class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int search(vector<int> nums, int l, int r, int target)
    {
        int ans = -1;
        while(r >= l)
        {
            int mid = (r + l)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return -1;
    }
    int findPivot(vector<int> nums)
    {
        int n = nums.size();
        int l = 0, r = nums.size() - 1;
        int ans = -1;
        while(r >= l)
        {
            int mid = (l + r)/2;
            if(nums[mid] > nums[n-1])
                l = mid + 1;
            else
            {
                ans = mid; 
                r = mid - 1;
            }
        }
        return ans;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = findPivot(nums);
        int ans1 = search(nums, 0, pivot-1, target);
        int ans2 = search(nums, pivot, n-1, target);
        return max(ans1, ans2);
    }
};
