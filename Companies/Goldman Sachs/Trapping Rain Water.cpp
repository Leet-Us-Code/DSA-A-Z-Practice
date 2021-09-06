// Hari

// Method - 1 (TC - N, SC - N)

int trap(vector<int>& height) {
        // we want to find the max heights on left and right of each building, take the min of them 
        // (which would determine max ht) and subtract from it the curr building height to get 
        // the amt of water that can be stored to of this building
        
        // fast
        ios_base::sync_with_stdio(false);
        int N = height.size();
        int waterStored = 0;
        
        // find prefix sum
        vector<int> prefix(N, INT_MIN);
        int maxLeft = INT_MIN;
        
        for(int i = 0; i<N; i++){
            maxLeft = max(maxLeft, height[i]);
            prefix[i] = maxLeft;
        }
        
        // find suffix sum
        vector<int> suffix(N, INT_MIN);
        int maxRight = INT_MIN;
        
        for(int i = N-1; i>=0; i--){
            maxRight = max(maxRight, height[i]);
            suffix[i] = maxRight;
        }
        
        // for each building, find min of both left and right and subtract from height
        for(int i = 0; i<N; i++){
            waterStored += (min(suffix[i], prefix[i]) - height[i]);
        }
        
        return waterStored;
    }

// Method - 2 (TC - N, SC - 1)

int trap(vector<int>& height) {
        // 2 pointer approach -> Most optimal approach
        // fast
        ios_base::sync_with_stdio(false);
        int N = height.size(); 
        int l = 0, r = N-1;
        int totalWater = 0;
        int leftMax = 0, rightMax = 0;
        
        
        while(l <= r){
            if(height[l] <= height[r]){
    /* if height[l] >= leftMax -> leftMax = height[l] -> no water is stored as this building ht is max
         if height[l] < leftMax -> water can be stored here (leftMax - height[l])
         no need to check rightMax here as it is already confirmed that it will be smaller 
         than right in line 12 condition  */
            if(height[l] >= leftMax) leftMax = height[l];
            else totalWater += leftMax - height[l];  
            l += 1;
        
        } else {
            // exact similar to if condition but for right
            if(height[r] >= rightMax) rightMax = height[r];
            else totalWater += rightMax - height[r];
            r -= 1;
            }
        }
        return totalWater;
        
    }
