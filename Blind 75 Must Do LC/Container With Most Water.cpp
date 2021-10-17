//Sid 
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n-1;
        int maxArea = 0;
        while(r > l)
        {
            maxArea = max(maxArea, min(height[r], height[l])*(r-l));
            if(height[r] > height[l])
                l++;
            else
                r--;
        }
        return maxArea;
    }
};

// Hari

int maxArea(vector<int>& height) {
        // fast io
        ios_base::sync_with_stdio(false);
        int N = height.size();
        int l = 0, r = N-1;
        int maxArea = 0;
        
        while(l < r){
            maxArea = max(maxArea, (r-l)*min(height[r], height[l]));
            if(height[l] > height[r]) r--;
            else l++;
        }
        return maxArea;
        
    }
