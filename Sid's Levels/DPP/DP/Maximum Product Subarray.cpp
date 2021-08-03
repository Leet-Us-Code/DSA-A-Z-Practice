class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int maxProduct(vector<int>& nums) {
        int minTillNow = nums[0], maxTillNow = nums[0];
        int res = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            int temp = minTillNow;
            minTillNow = min(nums[i], min(nums[i]*minTillNow, maxTillNow*nums[i]));
            maxTillNow = max(nums[i], max(nums[i]*maxTillNow, nums[i]*temp));
            res = max(res, maxTillNow);
        }
        return res;
    }
};
