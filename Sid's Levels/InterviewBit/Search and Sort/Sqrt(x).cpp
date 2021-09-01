class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int mySqrt(int x) {
        if(x == 0 || x == 1)
            return x;
        int l = 0, r = x;
        int ans = -1;
        while(r >= l)
        {
            int mid = (r + l)/2;
            if(mid <= (x/mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        return ans;
    }
};
