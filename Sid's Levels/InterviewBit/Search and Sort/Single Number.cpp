class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int singleNumber(vector<int>& nums) {
        int xorRes = nums[0];
        for(int i = 1; i < nums.size(); i++)
            xorRes = xorRes^(nums[i]);
        return xorRes;
    }
};
