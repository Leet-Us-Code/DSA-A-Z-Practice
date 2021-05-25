class Solution {
public:
    bool isPowerOfTwo(int n) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        if(n <= 0)
            return false;
        int x = n-1;
        int res = (n&x);
        if(res == 0)
            return true;
        else
            return false;
    }
};
