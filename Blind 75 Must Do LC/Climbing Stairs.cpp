// hari

int climbStairs(int n) {
        // fast
        ios_base::sync_with_stdio(false);
        vector<int> dp(n+1, 0);
        // base
        if(n == 0 || n == 1 || n == 2) return n;
        dp[0] = 1;
        dp[1] = 1;
        
        for(int i = 2; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2]; // we find no. of ways NOT no. of steps to reach curr step
        }
        return dp[n];
    }
