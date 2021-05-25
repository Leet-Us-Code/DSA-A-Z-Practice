class Solution {
public:
    bool isPowerOfThree(int n) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
  
        if(n <= 0)
            return false;
        while(n > 1)
        {
            if(n%3 != 0)
                return false;
            n = n/3;
        }
        return true;
    }
};
