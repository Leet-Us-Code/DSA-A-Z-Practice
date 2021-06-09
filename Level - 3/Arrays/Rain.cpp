class Solution {
public:
    int trap(vector<int>& height) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<int> left(height.size()), right(height.size());
        int maxLeft = INT_MIN, maxRight = INT_MIN;
        for(int i = 0; i < height.size(); i++)
        {
            maxRight = max(maxRight, height[i]);
            right[i] = maxRight;
        }
        for(int i = height.size() - 1; i >= 0; i--)
        {
            maxLeft = max(maxLeft, height[i]);
            left[i] = maxLeft;
        }
        int sum = 0;
        for(int i = 0; i < height.size(); i++)
        {
            sum += (min(left[i], right[i]) - height[i]);
        }
        return sum;
    }
};
