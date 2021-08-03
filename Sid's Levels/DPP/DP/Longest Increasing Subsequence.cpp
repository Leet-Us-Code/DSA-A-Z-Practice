// Recursive solution 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI  RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int lis(vector<int> nums, int ind, int &maxTillNow)
    {
        if(ind == 0)
            return 1;
        int maxEndingHere = 1;
        for(int i = 0; i < ind; i++)
        {
            int rest = lis(nums, i, maxTillNow);
            if(nums[i] < nums[ind])
            {
                maxEndingHere = max(maxEndingHere, rest + 1);
            }
        }
        maxTillNow = max(maxTillNow, maxEndingHere);
        return maxEndingHere;
    }
    int lengthOfLIS(vector<int>& nums) {
        int maxTillNow = 1;
        int n = nums.size()-1;
        int x =  lis(nums, n, maxTillNow);
        return maxTillNow;
    }
};

//DP (Bottom up)
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> lis(n, 1);
        for(int i = 1; i < n; i++)
        {
            lis[i] = 1;
            for(int j = 0; j < i; j++)
            {
                if(nums[j] < nums[i])
                {
                    lis[i] = max(lis[i], lis[j]+1);
                }
            }
        }
        int maxEle = INT_MIN;
        for(int i = 0; i < n; i++)
            maxEle = max(maxEle, lis[i]);
        return maxEle;
    }
};
