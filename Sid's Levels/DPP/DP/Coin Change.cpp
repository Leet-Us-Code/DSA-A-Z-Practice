// Recursive approach 
class Solution {
public:
    int helper(vector<int> coins, int amount, int ind)
    {
        if(amount == 0)
            return 0;
        if(ind < 0 && amount > 0)
            return INT_MAX;
        if(ind >= 0 && amount < 0)
            return INT_MAX;
        int including = helper(coins, amount - coins[ind], ind);
        int excluding = helper(coins, amount, ind - 1);
        if(including == INT_MAX)
            including = INT_MAX;
        else
            including++;
        return min(excluding, including);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        int res = helper(coins, amount, n-1);
        if(res == INT_MAX)
            return -1;
        return res;
    }
};

//DP (Tabulation) 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int coinChange(vector<int>& coins, int amount) {
        int m = coins.size();
        vector<vector<int>> dp(m+1, vector<int>(amount+1));
        //1st col will be 0 
        for(int i = 0; i <= m; i++)
            dp[i][0] = 0;
        //1st row will be INT_MAX 
        for(int i = 1; i <= amount; i++)
            dp[0][i] = INT_MAX;
        //remaining 
        for(int i = 1; i <= m; i++)
        {
            for(int j = 1; j <= amount; j++)
            {
                dp[i][j] = dp[i-1][j]; // not including 
                if(coins[i-1] <= j)
                {
                    int rem = dp[i][j - coins[i-1]];
                    if(rem != INT_MAX)
                        rem++;
                    dp[i][j] = min(dp[i][j], rem);
                }
            }
        }
        if(dp[m][amount] == INT_MAX)
            return -1;
        return dp[m][amount];
    }
};
