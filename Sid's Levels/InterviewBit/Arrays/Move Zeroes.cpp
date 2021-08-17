class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != 0)
            {
                nums[j] = nums[i];
                j++;
            }
        }
        for(; j < nums.size(); j++)
            nums[j] = 0;
    }
};
