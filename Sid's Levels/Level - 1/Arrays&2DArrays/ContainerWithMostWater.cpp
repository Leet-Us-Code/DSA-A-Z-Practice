class Solution {
public:
    int maxArea(vector<int>& height) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int l = 0,  r = height.size() - 1;
        int area, max = -1;
        while(l < r)
        {
            area = (r-l)*min(height[r],height[l]);
            if(max < area)
                max = area;
            if(height[r] < height[l])
                r--;
            else
                l++;
        }
        return max;
        
    }
};
