// Hari

int helper(vector<int> &nums){
        int N = nums.size();
        int dp[N]; memset(dp, 0, sizeof dp);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        
        for(int i = 2; i<N; i++){
            dp[i] = max(nums[i] + dp[i-2], dp[i-1]);
        }
        return dp[N-1];
    }
    
    
    
    int rob(vector<int>& nums) {
        // fast
        ios_base::sync_with_stdio(false);
        // base
        int N = nums.size();
        if(N < 2) return N? nums[0]:0; // if N == 1 or N == 0
        if(N == 2) return max(nums[0], nums[1]);
        
        // we exclude house 0 in one case, and house N in another. House Robber 1 code is called 2x 
        vector<int> numsA(nums.begin(), nums.end()-1);
        vector<int> numsB(nums.begin()+1, nums.end());
        
        return max(helper(numsA), helper(numsB));
               
    }
