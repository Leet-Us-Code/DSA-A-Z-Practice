class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int sum = 0;
        int maxSum = INT_MIN;
        for(int i = 0; i < nums.size(); i++)
        {
            sum = max(sum + nums[i], nums[i]);
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};
