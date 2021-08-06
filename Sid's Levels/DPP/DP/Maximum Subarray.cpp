class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int sum = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            sum = max(nums[i], sum + nums[i]);
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};
