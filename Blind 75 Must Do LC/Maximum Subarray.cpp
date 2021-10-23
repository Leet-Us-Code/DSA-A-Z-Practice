// Hari

int maxSubArray(vector<int>& nums) {
        // fast
        ios_base::sync_with_stdio(false);
        int max_overall = INT_MIN;
        int max_till_here = 0;
        
        for(int i = 0; i<nums.size(); i++){
            max_till_here += nums[i];
            if(max_overall < max_till_here) max_overall = max_till_here;
            if(max_till_here < 0) max_till_here = 0;
        }
        
        return max_overall;
    }
