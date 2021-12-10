// Hari

class Solution {
    public int coinChange(int[] coins, int amount) {
        Arrays.sort(coins);
        int N = coins.length;
        int[] dp = new int[amount+1];
        Arrays.fill(dp, 701);
        dp[0] = 0;
        
        // for loop for coins
        for(int i = 0; i<coins.length; i++){
            for(int j = coins[i]; j<=amount; j++){
                dp[j] = Math.min(dp[j], 1 + dp[j-coins[i]]);
            }
        }
        
        return dp[amount] == 701? -1 : dp[amount];
        
    }
}
