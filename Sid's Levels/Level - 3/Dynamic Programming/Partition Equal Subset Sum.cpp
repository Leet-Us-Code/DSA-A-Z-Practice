class Solution {
public:
    bool canPartition(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BAHDRE NARAYANA
        int sum = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++)
            sum += nums[i];
        if(sum%2 != 0)
            return false;
        int target = sum/2;
        bool dp[n+1][target+1];
        //first column will be true
        for(int i = 0; i <= n; i++)
        {
            dp[i][0] = true;
        }
        //first row except first element will be false
        for(int i = 1; i <= target; i++)
        {
            dp[0][i] = false;
        }
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= target; j++)
            {
                if(j < nums[i-1])
                    dp[i][j] = dp[i-1][j];
                else
                {
                    bool x = dp[i-1][j];
                    int rem = j - nums[i-1];
                    bool y = dp[i-1][rem];
                    dp[i][j] = x|y;
                }
            }
        }
        return dp[n][target];
    }
};
