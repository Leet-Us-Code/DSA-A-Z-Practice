// Hari

int searchInsert(vector<int>& nums, int target) {
        // fast
        ios_base::sync_with_stdio(false);
        // edge
        int N = nums.size();
        if(N == 0) return 0;
        
        int low = 0, high = N-1, mid = 0;
        // check boundary conditions and return result faster
        if(nums[low] > target) return low;
        if(nums[high] < target) return high+1;
        
        while(low <= high){
            mid = low + (high-low)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) low = mid+1;
            else high = mid - 1;
        }
        return low; // return low if target not found
        // though this covers case of when target > nums[high], for fast result I handled it 
        // earlier itself.
    }
