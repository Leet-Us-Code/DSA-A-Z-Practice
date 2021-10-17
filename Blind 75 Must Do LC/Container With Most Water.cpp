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
