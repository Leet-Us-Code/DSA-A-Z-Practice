class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    double myPow(double x, int n) {
        if(n == 0)
            return 1;
        if(n == 1)
            return x;
        int y = abs(n);
        double temp = myPow(x, y/2);
        if(y%2 == 0)
        {
            double res = temp*temp;
            if(n < 0)
                return (double)(1/res);
            else
                return res;
        }
        else
        {
            double res = x*temp*temp;
            if(n < 0)
                return (double)(1/res);
            else
                return res;
        }
    }
};
