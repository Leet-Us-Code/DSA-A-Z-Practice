class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        sort(nums.begin(), nums.end());
        int a = nums[0];
        int b = nums[1];
        int n = nums.size();
        int c = nums[n-1];
        int d = nums[n-2];
        return (c*d) - (a*b);
    }
};
