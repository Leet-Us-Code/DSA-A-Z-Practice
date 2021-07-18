class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int sumOfArray = 0;
        int actualSum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sumOfArray += nums[i];
        }
        for(int i = 0; i <= nums.size(); i++)
        {
            actualSum += i;
        }
        int res = actualSum - sumOfArray;
        return res;
    }
};
