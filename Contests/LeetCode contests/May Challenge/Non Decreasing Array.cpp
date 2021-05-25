class Solution {
public:
    bool isSorted(vector<int> nums)
    {
        vector<int> res;
        for(int i = 0; i < nums.size(); i++)
            res.push_back(nums[i]);
        sort(res.begin(), res.end());
        for(int i = 0; i < res.size(); i++)
            if(res[i] != nums[i])
                return false;
        return true;
    }
    bool checkPossibility(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<int> res;
        for(int i = 0; i < nums.size(); i++)
            res.push_back(nums[i]);
        for(int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i] > nums[i+1])
            {
                nums[i+1] = nums[i];
                break;
            }
        }
        bool x = isSorted(nums);
        for(int i = 0; i < res.size()-1; i++)
        {
            if(res[i] > res[i+1])
            {
                res[i] = res[i+1];
                break;
            }
        }
        bool y = isSorted(res);
        return x|y;
    }
};
