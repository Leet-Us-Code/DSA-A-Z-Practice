class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int slow = nums[0];
        int fast = nums[0];
        do 
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
        fast = nums[0];
        while(slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
