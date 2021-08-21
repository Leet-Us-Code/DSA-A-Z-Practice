//Recrusive solution 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BARANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool helper(vector<int> nums, int sumt, int ind, int tar)
    {
        if(sumt == tar)
            return true;
        if(ind < 0)
            return false;
        bool inc = helper(nums, sumt + nums[ind], ind-1, tar);
        bool exc = helper(nums, sumt, ind-1, tar);
        return inc|exc;
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int ele : nums)
            sum += ele;
        int sumt = 0;
        if(sum%2 != 0)
            return false;
        else
            return helper(nums, sumt, n-1, sum/2);
    }
};

//DP(tabulation)
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool canPartition(vector<int>& nums) {
        int tar = 0;
        for(int ele : nums)
            tar += ele;
        if(tar%2 != 0)
            return false;
        tar = tar/2;
        int n = nums.size();
        bool dp[n+1][tar+1];
        //1st col will be true
        for(int i = 0; i <= n; i++)
            dp[i][0] = true;
        //1st row except 1st element will be false;
        for(int i = 1; i <= tar; i++)
            dp[0][i] = false;
        //fill remaining 
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= tar; j++)
            {
                dp[i][j] = dp[i-1][j]; // not including 
                //check if it can be included 
                if(nums[i-1] <= j)
                {
                    dp[i][j] = dp[i-1][j]|(dp[i-1][j-nums[i-1]]);
                }
            }
        }
        return dp[n][tar];
    }
};
