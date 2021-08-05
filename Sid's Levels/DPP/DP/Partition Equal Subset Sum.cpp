//Recursive solution 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool helper(vector<int> nums, int ind, int tar)
    {
        if(ind < 0)
            return false;
        if(tar == 0)
            return true;
        bool inc = helper(nums, ind-1, tar-nums[ind]);
        bool exc = helper(nums, ind-1, tar);
        return inc|exc;
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int x : nums)
            sum += x;
        if(sum%2 != 0)
            return false;
        int tar = sum/2;
        int n = nums.size() - 1;
        return helper(nums, n, tar);
    }
};

//DP (tabulation) 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int x : nums)
            sum += x;
        if(sum%2 != 0)
            return false;
        int tar = sum/2;
        int n = nums.size();
        bool dp[n+1][tar+1];
        //first col will be True 
        for(int i = 0; i <= n; i++)
            dp[i][0] = true;
        //1st row will be false except the first element 
        for(int i = 1; i <= tar; i++)
            dp[0][i] = false;
        //remaining 
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= tar; j++)
            {
                dp[i][j] = dp[i-1][j]; // not including 
                //including 
                if(nums[i-1] <= j)
                {
                    dp[i][j] = (dp[i][j])|(dp[i-1][j-nums[i-1]]);
                }
            }
        }
        return dp[n][tar];
    }
};
