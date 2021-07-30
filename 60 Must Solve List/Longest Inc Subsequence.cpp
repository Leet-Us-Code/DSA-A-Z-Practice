// Hari

// Method - 1 (DP O(N^2))
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


// Method - 2 (BETTER O(NlogN)) - No DP is used here!

int lengthOfLIS(vector<int>& nums) {
        // when traversing, you can add the current element to LIS if it is LARGER than the largest 
        // element in current LIS sequence. If not, check if there exists an element just lesser than
        // current element and if yes, then REPLACE it.
        
        // This is NlogN and better than our older DP method (N^2)
        ios_base::sync_with_stdio(false);
        
        vector<int> res;
        int N = nums.size();
        for(int i = 0; i<N; i++){
            auto it = lower_bound(res.begin(), res.end(), nums[i]); // gives index 
            if(it == res.end()) res.push_back(nums[i]); // adding the element
            else *it = nums[i]; // replacement
        }
        
        return res.size();
    }

