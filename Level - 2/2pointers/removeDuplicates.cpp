class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAHA 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int j = 0;
        int i = 0;
        while(i < nums.size())
        {
            while(i < nums.size() - 1 && nums[i] == nums[i+1])
            {
                i++;
            }
            nums[j] = nums[i];
            j++;
            i++;
        }
        // for(int i = 0; i < j; i++)
        //     cout << nums[i] << " ";
        return j;
    }
};
