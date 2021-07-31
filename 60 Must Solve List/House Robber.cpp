// Hari

int rob(vector<int>& nums) {
        // fast
        ios_base::sync_with_stdio(false);
        // base
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];
        if(nums.size() == 2) return max(nums[0], nums[1]);
        int N = nums.size();
        int res = 0;
        
        // you can either choose a house and the prev to prev house , or select only the house before current depending on which is greater
        int dp[N];
        memset(dp, 0, sizeof dp);
        
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        
        for(int i = 2; i<N; i++){
            dp[i] = max(nums[i] + dp[i-2], dp[i-1]);
        }        
        return dp[N-1];
    }
