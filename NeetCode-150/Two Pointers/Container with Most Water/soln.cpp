// Hari

int maxArea(vector<int>& height) {
        // fast
        ios_base::sync_with_stdio(false);
        int N = height.size()-1;
        int i = 0, j = N;
        int maxArea = INT_MIN;
        
        while(i<j) {
            int minHeight = min(height[i], height[j]);
            maxArea = max(maxArea, (j-i)*minHeight);
            
            if(height[i] > height[j]) j--;
            else i++;
        }
        
        return maxArea;
    }
