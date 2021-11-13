class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int trap(vector<int>& height) {
        vector<int> maxLeft, maxRight; 
        int left = INT_MIN, right = INT_MIN;
        int n = height.size();
        for(int i = 0; i < n; i++)
        {
            left = max(left, height[i]);
            maxLeft.push_back(left);
        }
        for(int i = n-1; i >= 0; i--)
        {
            right = max(right, height[i]);
            maxRight.push_back(right);
        }
        reverse(maxRight.begin(), maxRight.end());
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += (min(maxRight[i], maxLeft[i]) - height[i]);
        }
        return sum;
    }
};
