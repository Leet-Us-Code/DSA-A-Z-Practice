// Hari

int trap(vector<int>& height) {
        // fast
        ios_base::sync_with_stdio(false);
        int N = height.size();
        int res = 0;
        
        /**
        * 0 1 0 2 1 0 1 3 2 1 2 1 - Building heights
        * 0 1 1 2 2 2 2 3 3 3 3 3 - tallest building to left of curr building
        * 3 3 3 3 3 3 3 3 2 2 2 1 - tallest building to right of curr building
        **/
        
        int leftHeights[20000], rightHeights[20000];
        int maxLeftHt = INT_MIN, maxRightHt = INT_MIN;
        for(int i = 0; i<N; i++){
            maxLeftHt = max(maxLeftHt, height[i]);
            leftHeights[i] = maxLeftHt;
        }
        for(int i = N-1; i>=0; i--) {
            maxRightHt = max(maxRightHt, height[i]);
            rightHeights[i] = maxRightHt;
        }
        
        for(int i = 0; i<N; i++) {
            // finding max ht of water and deducting building ht from it 
            res += min(leftHeights[i], rightHeights[i]) - height[i]; 
        }
        
        return res;
    }
