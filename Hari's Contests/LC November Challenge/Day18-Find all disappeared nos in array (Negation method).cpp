// NEW TECHNIQUE USED! 

vector<int> findDisappearedNumbers(vector<int>& nums) {
        // fast
        ios_base::sync_with_stdio(false);
        // we can use freq. arr and calculate, but this time we will do something new
        // freq arr format will obvio be [x x x x x 0 0 0 x] etc. 
        // we will negate currEle-1 th index as we traverse. 
        // At the end, we find the indices with +ve val and add 1 to it
        // Those are the missing numbers! -> Negation technique
        vector<int> res;
        int N = nums.size();
        
        for(int i = 0; i<N; i++){
            int posVal = abs(nums[i]);
            if(nums[posVal-1] > 0) nums[posVal-1] = - nums[posVal-1];
            // -1 as 0 based indexing
            nums[posVal-1] > 0 ? -nums[posVal-1] : nums[posVal-1];
            // negate value iff current value is positive. if negative, leave it be
            
        }
        
        for(int i = 0; i<N; i++){
            if(nums[i] > 0) res.push_back(i+1);
        }
        
        return res;
        // by this method TC: O(N) but SC is O(1) and not O(N) had we used a separate
        // frequency array or hashmap
    }
