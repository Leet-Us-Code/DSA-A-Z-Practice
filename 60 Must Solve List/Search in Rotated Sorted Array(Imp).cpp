// Hari

int search(vector<int>& nums, int target) {
        // first we have to find out which side of mid is sorted. Then check if target is on the 
        // same side as mid. If yes, check that side. Else, the other side
        
        // fast
        ios_base::sync_with_stdio(false);
        int N = nums.size();
        int l = 0, h = N-1;
        
        while(l <= h){
            int mid = l + (h-l) / 2;
            if(nums[mid] == target) return mid;
            
            // if right side is sorted
            if(nums[mid] < nums[h]){
                // check target
                if(target > nums[mid] && target <= nums[h]) l = mid+1;
                else h = mid-1;        
            }
            // else it has to be left side sorted
            else {
                if(target >= nums[l] && target < nums[mid]) h = mid-1;
                else l = mid+1;
            }
            
        }
        
        return -1;
    }
