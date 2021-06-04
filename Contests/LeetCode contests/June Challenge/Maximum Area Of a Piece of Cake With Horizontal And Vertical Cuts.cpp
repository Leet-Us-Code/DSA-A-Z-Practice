class Solution {
public:
    const long long int m = 1000000007;
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int maxDifHor = 0, maxDifVer = 0;
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        maxDifHor = max(maxDifHor, horizontalCuts[0]);
        maxDifVer = max(maxDifVer, verticalCuts[0]);
        for(int i = 1; i < horizontalCuts.size(); i++)
        {
            maxDifHor = max(maxDifHor, (horizontalCuts[i] - horizontalCuts[i-1]));
        }
        int n = horizontalCuts.size();
        maxDifHor = max(maxDifHor, (h - horizontalCuts[n-1]));
        for(int i = 1; i < verticalCuts.size(); i++)
        {
            maxDifVer = max(maxDifVer, (verticalCuts[i] - verticalCuts[i-1]));
        }
        
        int m = verticalCuts.size();
        maxDifVer = max(maxDifVer, (w - verticalCuts[m-1]));
        return (long) maxDifVer*maxDifHor%1000000007;
        
    }
};
