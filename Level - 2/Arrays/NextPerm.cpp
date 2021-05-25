class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int index = -1;
        int n = nums.size();
        for(int i = n - 1; i > 0; i--)
        {
            if(nums[i] > nums[i-1])
            {
                index = i-1;
                break;
            }
        }
        if(index == -1)
        {
            sort(nums.begin(), nums.end());
        }
        else 
        {
            int minNum = INT_MAX;
            int minInd = -1;
            for(int i = index+1; i < n; i++)
            {
                if(nums[i] < minNum && nums[i] > nums[index])
                {
                    minNum = nums[i];
                    minInd = i;
                }
            }
            swap(nums[index], nums[minInd]);
            vector<int> ::iterator itr1 = nums.begin();
            advance(itr1, index+1);
            sort(itr1, nums.end());
        }
    }
};
