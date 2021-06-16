class Solution {
public:
    bool canPartition(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int sum = 0;
        int tar; 
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        if(sum%2 != 0)
            return false;
        tar = sum/2;
        bool dp[n+1][tar+1];
        //first col will be true 
        for(int i = 0; i <= n; i++)
        {
            dp[i][0] = true;
        }
        //first row except first element will be false 
        for(int i = 1; i <= tar; i++)
        {
            dp[0][i] = false;
        }
        //populate the dp array 
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= tar; j++)
            {
                dp[i][j] = dp[i-1][j]; // not including 
                if(nums[i-1] <= j)
                {
                    bool x = dp[i-1][j-nums[i-1]];
                    if(x)
                        dp[i][j] = true;
                }
            }
        }
        return dp[n][tar];
    }
};
