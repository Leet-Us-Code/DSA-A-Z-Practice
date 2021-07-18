class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<unsigned int> res(target+1);
        res[0] = 1;
        for(int i = 1; i <= target; i++)
        {
            for(int j = 0; j < nums.size(); j++)
            {
                int x = nums[j];
                if(i >= x)
                {
                    res[i] = res[i] + res[i-x];
                }
            }
        }
        return res[target];
    }
};
