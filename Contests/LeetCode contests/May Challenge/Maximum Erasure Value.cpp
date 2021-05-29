class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int sum = 0;
        int l = 0, r = 0;
        int n = nums.size();
        map<int, int> mp;
        int maxSum = 0;
        while(l < n && r < n)
        {
            if(mp[nums[r]] == 0)
            {
                mp[nums[r]]++;
                sum += nums[r];
                r++;
            }
            else 
            {
                maxSum = max(maxSum, sum);
                sum = sum - nums[l];
                mp[nums[l]]--;
                l++;
            }
        }
        maxSum = max(maxSum, sum);
        return maxSum;
    }
};
