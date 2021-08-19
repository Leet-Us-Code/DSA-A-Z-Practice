// Hari

int minSubArrayLen(int target, vector<int>& nums) {
        //fast
        ios_base::sync_with_stdio(false);
        int l = 0, r = 0;
        int N = nums.size();
        int sum = 0, minLen = INT_MAX;
        
        while(r < N){
            sum += nums[r]; r += 1;
            while(sum >= target){
                minLen = min(minLen, r-l);
                sum -= nums[l++]; // this will give us the least longest possible subarray
            }
        }
        
        return minLen == INT_MAX ? 0 : minLen;
    }
