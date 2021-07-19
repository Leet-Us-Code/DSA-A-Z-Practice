class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> lis(n);
        lis[0] = 1;
        for(int i = 1; i < n; i++)
        {
            int res = INT_MIN;
            for(int j = 0; j < i; j++)
            {
                if(nums[j] < nums[i])
                {
                    res = max(res, lis[j]);
                }
            }
            if(res == INT_MIN)
                lis[i] = 1;
            else
                lis[i] = res + 1;
        }
        int maxEle = 1;
        for(int i = 0; i < n; i++)
        {
            maxEle = max(maxEle, lis[i]);
        }
        return maxEle;
    }
};
