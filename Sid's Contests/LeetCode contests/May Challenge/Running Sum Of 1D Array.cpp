class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<int> res(nums.size());
        res[0] = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            res[i] = res[i-1] + nums[i];
        }
        return res;
    }
};
