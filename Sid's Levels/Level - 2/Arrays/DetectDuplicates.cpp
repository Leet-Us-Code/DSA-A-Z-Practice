class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //using bitmasking concept 
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = 0; i < n-1; i++)
        {
            if(nums[i] == nums[i+1])
                return nums[i];
        }
        return -1;
    }
};
