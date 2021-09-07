class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool isPossible(vector<int> nums, int sum, int ind)
    {
        if(sum == 0)
            return true;
        if(ind < 0)
            return false;
        bool inc = isPossible(nums, sum-nums[ind], ind-1);;
        bool exc = isPossible(nums, sum, ind-1);
        return inc|exc;
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int x : nums)
            sum += x;
        if(sum%2 != 0)
            return false;
        return isPossible(nums, sum/2, nums.size()-1);
    }
};
