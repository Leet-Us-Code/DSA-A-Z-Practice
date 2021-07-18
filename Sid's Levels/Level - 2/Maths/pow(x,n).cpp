class Solution {
public:
    double myPow(double x, int n) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        if(n == 0)
        {
            int res = 1;
            double y = (double)res;
            return y;
        }
        double y;
        int m = abs(n);
        double temp = myPow(x, m/2);
        if(m % 2 == 0)
        {
            y = temp * temp;   
        }
        else
        {
            y = x * temp * temp;
        }
        if(n < 0)
            return (double)1/(double)y;
        else
            return y;
            
    }
};
