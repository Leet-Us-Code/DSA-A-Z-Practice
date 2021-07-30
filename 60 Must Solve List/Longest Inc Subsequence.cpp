// Hari

int lengthOfLIS(vector<int>& nums) {
        // all LIS should be min 1 (with self)
        int N = nums.size();
        vector<int> LIS(N, 1);
        int res = 1;
        
        for(int i = N-2; i>=0; i--){
            for(int j = i+1; j<N; j++){
                // if curr < next elements
                if(nums[i] < nums[j]){
                    LIS[i] = max(LIS[i], LIS[j] + 1);
                    res = max(res, LIS[i]);
                }
            }
        }
        
        return res;
    }
