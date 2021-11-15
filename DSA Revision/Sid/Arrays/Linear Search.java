class Solution {
    public int search(int[] nums, int target) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int n = nums.length;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == target)
                return i;
        }
        return -1;
    }
}
