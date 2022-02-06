// Hari

int maxSubArray(vector<int>& nums) {
        // fast
        ios_base::sync_with_stdio(false);
        int max_so_far = INT_MIN;
        int max_ending_here = 0;
        int N = nums.size();
        
        for(int i = 0; i<N; i++){
            max_ending_here += nums[i];
            if(max_so_far < max_ending_here) max_so_far = max_ending_here;
            if(max_ending_here < 0) max_ending_here = 0;
        }
        
        return max_so_far;
    }
