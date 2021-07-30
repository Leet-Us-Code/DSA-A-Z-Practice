// Hari

int maxSubArray(vector<int>& nums) {
        int max_total = INT_MIN;
        int max_ending_here = 0;
        
        for(int i = 0; i<nums.size(); i++){
            max_ending_here += nums[i];
            if(max_total < max_ending_here) max_total = max_ending_here;
            if(max_ending_here < 0) max_ending_here = 0;            
        }
        return max_total;
    }
