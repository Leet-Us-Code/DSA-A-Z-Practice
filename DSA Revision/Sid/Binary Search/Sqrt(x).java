class Solution {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    public int mySqrt(int x) {
        if(x == 0 || x == 1)
            return x;
        int l = 1, r = x - 1;
        int ans = -1;
        while(r >= l)
        {
            int mid = (r+l)/2;
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
}
