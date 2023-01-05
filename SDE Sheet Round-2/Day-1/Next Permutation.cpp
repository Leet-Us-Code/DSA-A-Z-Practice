// Hari

void nextPermutation(vector<int>& nums) {
        // fast
        ios_base::sync_with_stdio(false);
        // Can use STL also. But not allowed in interview
        //next_permutation(nums.begin(), nums.end());
        int N = nums.size();
        int l = 0, r = 0; // we will find l and r, then swap them
        
        // finding l
        for(l = N-2; l>=0; l--){
            // l is index where num < nums[l+1]
            if(nums[l] < nums[l+1]) break;
        }
        // if l DNE ie. nums is strictly dec (5,4,3,2,1)..reverse it ie. sort
        //if(l < 0) reverse(nums.begin(), nums.end());
        if(l < 0) sort(nums.begin(), nums.end());
        else {
            // finding r -> nums[r] is just greater than nums[l]
            for(r = N-1; r>l; r--){
                if(nums[r] > nums[l]) break;
            }
            // swap l and r 
            swap(nums[l], nums[r]);
            // reverse all nums from l onwards to get lowest dict order
            reverse(nums.begin()+l+1, nums.end());
        }
        
    } 


// Sid 
void nextPermutation(vector<int>& nums) {
        int n = nums.size(); 
        int breakPoint = -1; 
        for(int i = n-1; i > 0; i--){
            if(nums[i-1] < nums[i]){
                breakPoint = i-1; 
                break;
            }
        }

        if(breakPoint != -1){
            int smallestElementGreaterThanBreakPoint = INT_MAX, smallestElementGreaterThanBreakPointInd = -1; 
            for(int i = breakPoint+1; i < n; i++){
                if(smallestElementGreaterThanBreakPoint > nums[i] && nums[i] > nums[breakPoint]){
                    smallestElementGreaterThanBreakPoint = nums[i]; 
                    smallestElementGreaterThanBreakPointInd = i;
                }
            }
            swap(nums[breakPoint], nums[smallestElementGreaterThanBreakPointInd]);
            sort(nums.begin() + breakPoint+1, nums.end());
        }
        else{
            sort(nums.begin(), nums.end());
        }
    }

