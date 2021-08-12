class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> maxl(n), maxr(n);
        int left = INT_MIN, right = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            right = max(right, height[i]);
            maxr[i] = right;
        }
        for(int i = n-1; i >= 0; i--)
        {
            left = max(left, height[i]);
            maxl[i] = left;
        }
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += min(maxl[i], maxr[i]) - height[i];
        }
        return sum;
    }
};
