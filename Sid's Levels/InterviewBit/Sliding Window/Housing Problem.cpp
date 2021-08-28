//negative numbers not allowed
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0, l = 0, r = 0;
        int n = nums.size(), cntr = 0;
        while(r < n)
        {
            sum += nums[r];
            r++;
            while(l < r && sum > k)
            {
                sum -= nums[l];
                l++;
            }
            if(sum == k)
                cntr++;
        }
        return cntr;
    }
};
