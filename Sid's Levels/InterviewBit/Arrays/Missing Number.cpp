class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = (n*(n+1))/2;
        int sum = 0;
        for(int x : nums)
            sum += x;
        return total-sum;
    }
};
