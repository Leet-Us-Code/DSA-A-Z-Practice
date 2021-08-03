// Hari

// Method - 1 (Amount is outer loop)

int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(), coins.end());
        int N = coins.size();
        // find min # of coins to reach x amount (every cell in dp)
        vector<int> dp(amount + 1, 696969);
        dp[0] = 0; // 0 coins needed for 0 amount
        
        for(int i = 1; i<=amount; i++){ // amount
            for(int j = 0; j<N; j++){ // coin denomination
                if(coins[j] <= i){
                    // valid
                    dp[i] = min(dp[i], 1 + dp[i-coins[j]]);
                } else continue;
            }
        }
        
        return dp[amount] == 696969 ? -1 : dp[amount];
    }
 
// Method - 2 (Coins is in outer loop) -> Faster

int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(), coins.end());
        int N = coins.size();
        // find min # of coins to reach x amount (every cell in dp)
        vector<int> dp(amount + 1, 696969);
        dp[0] = 0; // 0 coins needed for 0 amount
        
        for(int i = 0; i<N; i++){ // coins
            for(int j = coins[i]; j<=amount; j++){ // amount
                // amount is guaranteed to be > coin value
                dp[j] = min(dp[j], 1 + dp[j - coins[i]]);
                
            }
        }
        
        return dp[amount] == 696969 ? -1 : dp[amount];
    }
