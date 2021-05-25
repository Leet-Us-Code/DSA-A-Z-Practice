class Solution {
public:
    bool canPartition(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        //OM NAMO NARAYANAYA
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i < n; i++)
            sum += nums[i];
        if(sum%2 != 0)
            return false;
        else
        {
            int target = sum/2;
            bool dp[n+1][target+1]; // dp[i][j] => stores whether there is a subset with sum j in the subset in array nums[0..i]
            
            dp[0][0] = true;
            //first row from index 1 is false
            for(int i = 1; i <= target; i++)
                dp[0][i] = false;
            //first column is true 
            for(int i = 1; i <= n; i++)
                dp[i][0] = true;
            //populating the dp array 
            for(int i = 1; i <= n; i++)
            {
                for(int j = 1; j <= target; j++)
                {
                    dp[i][j] = dp[i-1][j] ;// not including the current element 
                    if(j >= nums[i-1])
                    {
                        dp[i][j] = (dp[i-1][j] || dp[i-1][j-nums[i-1]]);// if we used the element i then we must check for the subset in (0...i-1)
                    }
                }
            }
            return dp[n][target];
        }
    }
};
