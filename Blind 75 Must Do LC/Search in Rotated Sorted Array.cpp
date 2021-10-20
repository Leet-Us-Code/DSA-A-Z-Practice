// Hari

int search(vector<int>& nums, int target) {
        // fast
        ios_base::sync_with_stdio(false);
        int N = nums.size();
        int l = 0, h = N-1;
        
        while(l <= h){
            int mid = l + (h-l)/2;
            if(nums[mid] == target) return mid;
            
            // if right side is sorted
            if(nums[mid] < nums[h]){
                if(target >= nums[mid] && target <= nums[h]) l = mid+1;
                else h = mid-1;
            }
            
            // if left side is sorted
            else {
                if(target >= nums[l] && target <= nums[mid]) h = mid-1;
                else l = mid+1;
            }
        }
        
        return -1; 
    }
