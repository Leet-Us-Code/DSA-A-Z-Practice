class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int maxEnd = nums[0];
        int minEnd = nums[0];
        int maxOver = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            int temp = maxEnd;
            maxEnd = max(nums[i], max(maxEnd*nums[i], minEnd*nums[i]));
            minEnd = min(nums[i], min(temp*nums[i], minEnd*nums[i]));
            maxOver = max(maxOver, maxEnd);
        }
        return maxOver;
    }
};
