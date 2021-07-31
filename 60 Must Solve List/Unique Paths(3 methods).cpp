// Hari

// Method - 1 Recursion (TLE)

// Note that this is # of paths and NOT # of steps
    
    int helper(int m, int n){
        // base 
        ios_base::sync_with_stdio(false);
        if(m < 0 || n < 0) return 0;
        else if(m == 0 || n == 0) return 1; // first row and col. ONly 1 path to reach end 
        
        else return (helper(m-1, n) + helper(m, n-1));  
    }
    
    
    
    
    int uniquePaths(int m, int n) {
        return helper(m-1, n-1);
    }

// Method - 2 Memoization (Top Down Dp) (TLE)

// Note that this is # of paths and NOT # of steps
    
    int helper(int m, int n, vector<vector<int>> dp){
        // base 
        ios_base::sync_with_stdio(false);
        if(m < 0 || n < 0) return 0;
        else if(m == 0 || n == 0) return 1; // first row and col. ONly 1 path to reach end 
        else if(dp[m][n] > 0) return dp[m][n];
        
        return dp[m][n] = (helper(m-1, n, dp) + helper(m, n-1, dp));  
    }
    
    
    
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int> (n, 0));
        return helper(m-1, n-1, dp);
    }


// Method - 3 Tabulation (Bottom Up DP)

// Note that this is # of paths and NOT # of steps
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int> (n, 1));
        for(int i = 1; i<m; i++){
            for(int j = 1; j<n; j++){
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        
        return dp[m-1][n-1];
    }
