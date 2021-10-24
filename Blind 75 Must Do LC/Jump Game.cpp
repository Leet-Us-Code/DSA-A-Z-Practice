// Hari

bool canJump(vector<int>& nums) {
        int N = nums.size();
        int lastgoodIndex = N-1; // pointer points to last reachable index
        
        for(int i = N-2; i>=0;i--){
            if(i + nums[i] >= lastgoodIndex) lastgoodIndex = i; 
        }
        
        return lastgoodIndex == 0; 
    }
