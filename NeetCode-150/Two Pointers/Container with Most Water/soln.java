class Solution {
    public int minimum(int x, int y){
        if(x > y)
            return y;
        return x;
    }
    public int maxArea(int[] height) {
        int l = 0, n = height.length, r = n - 1; 
        int maxArea = Integer.MIN_VALUE;
        while(r > l){
            int width = (r - l);
            int len = minimum(height[r], height[l]); 
            int area = width*len;

            if(area > maxArea)
                maxArea = area; 
            if(height[l] > height[r])
                r--;
            else
                l++;
        }
        return maxArea;
    }
}
