class Solution {
public:
  //OM GAN GANAPATHAYE NAMO NAMAH 
  //JAI SHRI RAM 
  //JAI BAJRANGBALI 
  //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void moveZeroes(vector<int>& nums) {
        int ptr1 = 0, ptr2 = 0;
        int n = nums.size();
        while(ptr1 < n)
        {
            if(nums[ptr1] != 0)
            {
                swap(nums[ptr1], nums[ptr2]);
                ptr2++;
            }
            ptr1++;
        }
    }
};
