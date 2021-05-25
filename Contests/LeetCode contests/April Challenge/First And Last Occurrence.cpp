class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int first = -1, last = -1;
        int l = 0, r = nums.size() - 1;
        while(l <= r)
        {
            int mid = (l + r)/2;
            if(nums[mid] == target)
            {
                first = mid;
                r = mid - 1;
            }
            else if(nums[mid] > target)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        l = 0;
        r = nums.size() - 1;
        while(l <= r)
        {
            int mid = (l + r)/2;
            if(nums[mid] == target)
            {
                last = mid;
                l = mid + 1;
            }
            else if(nums[mid] > target)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        vector<int> res;
        res.push_back(first);
        res.push_back(last);
        return res;
    }
};
