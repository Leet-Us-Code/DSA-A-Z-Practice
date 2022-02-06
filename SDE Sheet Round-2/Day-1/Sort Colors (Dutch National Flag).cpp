// Hari

void sortColors(vector<int>& nums) {
        // TC: O(N) [one pass] SC:O(1)
        
        /* dutch national flag algo 
        nums[0...low-1] -> 0
        nums[low...mid-1] -> 1
        nums[high+1....end] -> 2
        we will maintain low, mid and high pointers  
        
        NOTE: when swapping nums[mid] and nums[high], we won't move mid forward. 
        only high--. this is contrasting to when swapping nums[low] and nums[mid] where we did low++ and mid++ also.
        we don't do nums[mid++] as we might miss evaluating the number that came from nums[high]
        */
        int N = nums.size();
        int low = 0, mid = 0, hi = N-1;
        
        while(mid <= hi){
            switch(nums[mid]){
                    // if nums[mid] == 0
                case 0:
                    swap(nums[low++], nums[mid++]); break;
                
                    // if nums[mid] == 1
                case 1:
                    mid++; break;
                    
                    // if nums[mid] == 2
                case 2:
                    swap(nums[mid], nums[hi--]); break;
            }
        }
        
    }
