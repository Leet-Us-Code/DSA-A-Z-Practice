//Recursive solution 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int helper(vector<int> nums, int ind)
    {
        if(ind < 0)
            return 0;
        if(ind == 0)
            return nums[0];
        int r = nums[ind] + helper(nums, ind-2);
        int nr = helper(nums, ind-1);
        return max(r, nr);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        return helper(nums, n-1);
    }
};
