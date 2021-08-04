// Hari

int findMin(vector<int>& nums) {
        // fast
        ios_base::sync_with_stdio(false);
        
        int N = nums.size();
        if(N == 0) return 0;
        int low = 0;
        int hi = N-1;
        
        while(low <= hi){
            if(nums[low] <= nums[hi]) return nums[low]; // base
            int mid = low + (hi - low) / 2;
            if(nums[mid] >= nums[low]) low = mid+1;
            else hi = mid;
        }
        
        return -1; // you can return whatver, it doesnt matter as L13 always returns val 
    }
