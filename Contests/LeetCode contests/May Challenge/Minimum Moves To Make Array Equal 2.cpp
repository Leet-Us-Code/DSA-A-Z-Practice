class Solution {
public:
    int minMoves2(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        //OM NAMO NARAYANAYA
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int med = nums[n/2];
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += abs(med - nums[i]);
        }
        return sum;
    }
};
