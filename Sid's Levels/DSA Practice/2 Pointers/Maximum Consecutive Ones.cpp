class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYAYNA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxLen = 0;
        for(int i = 0; i < n; i++)
        {
            int c = 0;
            while(i < n && nums[i] == 1)
            {
                c++;
                i++;
            }
            maxLen = max(maxLen, c);
        }
        return maxLen;
    }
};
