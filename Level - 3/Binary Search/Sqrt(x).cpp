class Solution {
public:
    int mySqrt(int x) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        if(x == 0)
            return 0;
        else if(x == 1)
            return 1;
        int l = 0, r = x;
        int ans = 0;
        while(l <= r)
        {
            int mid = (l + r)/2;
            if(mid <= (x/mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        return ans;
    }
};
