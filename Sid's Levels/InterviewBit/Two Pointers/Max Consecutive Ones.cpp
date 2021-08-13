class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l = 0, r = 0;
        int n = nums.size();
        int maxLen = INT_MIN;
        while(l < n && r < n)
        {
            if(nums[r] == 1)
            {
                maxLen = max(maxLen, r-l+1);
                r++;
            }
            else 
            {
                r++;
                l = r;
            }
        }
        maxLen = max(maxLen, r-l);
        return maxLen;
    }
};
