class Solution {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    static Long numberOfWays(int n) {
        // code here
        if(n == 1)
        {
            Long x = new Long(1);
            return x;
        }
        if(n == 2)
        {
            Long x = new Long(2);
            return x;
        }
        else 
        return numberOfWays(n-1) + numberOfWays(n-2);
    }
};
