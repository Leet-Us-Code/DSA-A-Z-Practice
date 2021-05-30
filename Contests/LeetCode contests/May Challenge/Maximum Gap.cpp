class Solution {
public:
    int maximumGap(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        sort(nums.begin(), nums.end());
        int maxDif = 0;
        int n = nums.size();
        for(int i = 1; i < n; i++)
        {
            int dif = nums[i] - nums[i-1];
            maxDif = max(maxDif, dif);
        }
        return maxDif;
    }
};
