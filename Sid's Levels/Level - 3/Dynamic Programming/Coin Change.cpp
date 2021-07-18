class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int dp[amount+1];
        for(int i = 0; i <= amount; i++)
            dp[i] = amount + 1;
        int n = coins.size();
        for(int i = 0; i <= amount; i++)
        {
            if(i == 0)
                dp[i] = 0;
            for(int j = 0; j < n; j++)
            {
                if(coins[j] <= i)
                {
                    //put +1 only on dp[i-coins[j]] -> here only comparision occurs
                    dp[i] = min(dp[i], dp[i-coins[j]]+1);
                }
            }
        }
        if(dp[amount] > amount)
            return -1;
        if(dp[amount] == INT_MAX)
            return -1;
        return dp[amount];
    }
};
