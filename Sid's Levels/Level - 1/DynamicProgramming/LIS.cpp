class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int i, j;
        int n = nums.size();
        vector<int> lis(n);
        lis[0] = 1; // lis of the single (first) element
        for(int i = 1; i < n; i++)
        {
            lis[i] = 1;
            for(int j = 0; j < i; j++)
            {
                if(nums[i] > nums[j] && lis[i] < lis[j] + 1)
                    lis[i] = lis[j] + 1;
            }
        }
        int max = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            if(max < lis[i])
                max = lis[i];
        }
        return max;
    }
};
