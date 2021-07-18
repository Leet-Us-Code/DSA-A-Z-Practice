class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        if(nums.size() == 0)
            return  1;
        sort(nums.begin(), nums.end());
        int i = 0;
        while(i < nums.size() && nums[i] <= 0)
        {
            i++;
        }
        if(i >= nums.size())
            return 1;
        if(nums[i] != 1)
            return 1;
        else
        {
            int min = INT_MAX;
            int flag = 0;
            for(int j = i + 1; j < nums.size(); j++)
            {
                if(nums[j] - nums[j-1] > 1)
                {
                    if(nums[j-1] + 1 < min)
                    {
                        min = nums[j-1] + 1;
                        flag = 1;
                    }
                }
            }
            if(flag == 0)
                return nums[nums.size()-1] + 1;
            else
            {
                return min;
            }
        }
    }
};
