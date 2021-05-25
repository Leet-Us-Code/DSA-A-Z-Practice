class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int lis[100000];
        int n = nums.size();
        for(int i = 0; i < n; i++)
            lis[i] = 1;
        for(int i = 1; i < n ; i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(nums[j] < nums[i])
                {
                    lis[i] = max(lis[i], lis[j] + 1);
                }
            }
        }
        int maxEle = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            maxEle = max(maxEle, lis[i]);
        }
        return maxEle;
    }
};
