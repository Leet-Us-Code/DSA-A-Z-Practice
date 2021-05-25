class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int pivot(vector<int> nums)
    {
        int res = 0;
        int l = 0;
        int n = nums.size();
        int r = n-1;
        while(l <= r)
        {
            int mid = (r + l)/2;
            if(nums[mid] > nums[n-1])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        return l;
    }
    int getInd(vector<int> nums, int l, int r, int target)
    {
        int res = -1;
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
        return res;
    }
    int search(vector<int>& nums, int target) {
        int res = pivot(nums);
        int n = nums.size();
        int ind1 = getInd(nums, 0, res-1, target);
        int ind2 = getInd(nums, res, n-1, target);
        if(ind1 == -1 && ind2 == -1)
            return -1;
        else 
        {
            if(ind1 == -1)
                return ind2;
            else
                return ind1;
        }
    }
};
