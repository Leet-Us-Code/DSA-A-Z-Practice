class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int maxEnd = nums[0], minEnd = nums[0], res = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            int temp = minEnd;
            minEnd = min(nums[i], min(maxEnd*nums[i], minEnd*nums[i]));
            maxEnd = max(nums[i], max(maxEnd*nums[i], temp*nums[i]));
            res = max(res, maxEnd);
        }
        return res;
        
    }
};
