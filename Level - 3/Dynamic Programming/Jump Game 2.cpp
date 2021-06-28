//DP based naive soln 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int jump(vector<int>& nums) {
        int n = nums.size();
        int dp[n];
        for(int i = 0; i < n; i++)
        {
            dp[i] = INT_MAX;
        }
        dp[n-1] = 0;
        for(int i = n-2; i >= 0; i--)
        {
            for(int j = 1; j <= nums[i]; j++)
            {
                if(i+j < n && dp[i+j] != INT_MAX)
                    dp[i] = min(dp[i], dp[i+j]+1);
            }
        }
        return dp[0];
    }
};
