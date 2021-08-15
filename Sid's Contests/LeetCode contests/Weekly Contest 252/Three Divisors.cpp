class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool isThree(int n) {
        int cntr = 0;
        for(int i = 1; i*i <= n; i++)
        {
            if(n%i == 0)
            {
                if(n/i == i)
                    cntr++;
                else
                    cntr += 2;
            }
        }
        if(cntr == 3)
            return true;
        return false;
    }
};
