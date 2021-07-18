class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int i = 0, j = 0;
        int maxL = 0;
        while(i < nums.size() && j < nums.size())
        {
            if(nums[j] == 1)
                j++;
            else
            {
                maxL = max(maxL, j-i);
                j++;
                i = j;
            }
        }
        maxL = max(maxL, j-i);
        return maxL;
    }
};
