class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int trap(vector<int>& height) {
        vector<int> maxl, maxr; 
        int ml = INT_MIN, mr = INT_MIN;
        int n = height.size();
        for(int i = 0; i < n; i++)
        {
            ml = max(ml, height[i]);
            maxl.push_back(ml);
        }
        for(int i = n-1; i >= 0; i--)
        {
            mr = max(mr, height[i]);
            maxr.push_back(mr);
        }
        reverse(maxr.begin(), maxr.end());
        int total = 0;
        for(int i = 0; i < n; i++)
        {
            total += (min(maxr[i], maxl[i]) - height[i]);
        }
        return total;
    }
};
