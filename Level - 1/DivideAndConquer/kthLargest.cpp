class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        return nums[k-1];
    }
};
