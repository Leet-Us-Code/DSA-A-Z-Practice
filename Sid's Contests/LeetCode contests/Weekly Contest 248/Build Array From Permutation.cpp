class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int n = nums.size();
        vector<int> res(n);
        for(int i = 0; i < n; i++)
        {
            res[i] = nums[nums[i]];
        }
        return res;
    }
};
