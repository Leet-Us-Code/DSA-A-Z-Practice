// Hari

int searchInsert(vector<int>& nums, int target) {
        // binary search solution
        // fast
        ios_base::sync_with_stdio(false);
        int N = nums.size(); 
        
        int l = 0, h = N-1, mid = 0;
        // check edges first, saves time
        if(target < nums[l]) return l; // insert this target element first place
        if(target > nums[h]) return h+1; // insert at the end
        
        while(l <= h){
            // standard bin search
            mid = l + (h-l) / 2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) l = mid + 1;
            else h = mid - 1;
        }
        return l; // if target not found
    }
