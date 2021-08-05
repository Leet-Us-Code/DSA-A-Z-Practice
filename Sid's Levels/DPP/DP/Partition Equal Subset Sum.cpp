//Recursive solution 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool helper(vector<int> nums, int ind, int tar)
    {
        if(ind < 0)
            return false;
        if(tar == 0)
            return true;
        bool inc = helper(nums, ind-1, tar-nums[ind]);
        bool exc = helper(nums, ind-1, tar);
        return inc|exc;
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int x : nums)
            sum += x;
        if(sum%2 != 0)
            return false;
        int tar = sum/2;
        int n = nums.size() - 1;
        return helper(nums, n, tar);
    }
};

//DP (tabulation) 
