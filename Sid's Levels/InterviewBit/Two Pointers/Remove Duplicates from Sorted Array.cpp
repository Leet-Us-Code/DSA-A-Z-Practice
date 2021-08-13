class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int removeDuplicates(vector<int>& nums) {
        int i, j = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            while(i < n-1 && nums[i] == nums[i+1])
            {
                i++;
            }
            nums[j] = nums[i];
            j++;
        }
        return j;
    }
};
