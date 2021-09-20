//Recursive solution 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int helper(vector<int> coins, int ind, int tar)
    {
        if(tar == 0)
            return 0;
        if(ind < 0)
            return INT_MAX;
        if(tar < 0 && ind >= 0)
            return INT_MAX;
        int x = helper(coins, ind, tar-coins[ind]);
        if(x != INT_MAX)
            x++;
        int y = helper(coins, ind-1, tar);
        return min(x, y);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        int res = helper(coins, n-1, amount);
        if(res == INT_MAX)
            return -1;
        return res;
    }
};

//DP code
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BAHDRE NARAYANA
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n+1, vector<int>(amount+1, 0));
        //make first row except first element as INT_MAX
        for(int i = 1; i <= amount; i++)
        {
            dp[0][i] = INT_MAX;
        }
        //rest of the matrix 
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= amount; j++)
            {
                int exc = dp[i-1][j];
                int inc = INT_MAX;
                if(coins[i-1] <= j)
                {
                    inc = min(inc, dp[i][j-coins[i-1]]);
                    if(inc != INT_MAX)
                        inc++;
                }
                dp[i][j] = min(inc, exc);
            }
        }
        if(dp[n][amount] == INT_MAX)
            return -1;
        return dp[n][amount];
    }
};
