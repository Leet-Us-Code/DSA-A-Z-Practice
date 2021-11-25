//Will have to look into this -> BigDecimal Error
class Solution {
    //OM GAN GANAPAATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    public double myPow(double x, int n) {
        if(x == 0 || x == 1)
            return x;
        if(n == 0)
            return 1;
        if(n == 1)
            return x;
        int y = Math.abs(n);
        double nxt = myPow(x, y/2);
        if(n%2 == 0)
        {
            double res = nxt*nxt;
            if(n < 0)
                return (double)(1/res);
            else
                return res;
        }
        else
        {
            double res = x*nxt*nxt;
            if(n < 0)
                return (double)(1/res);
            else
                return res;
        }
    }
}
//Correct Solution 
class Solution {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    public double myPow(double x, int n) {
        double temp; 
        if(n == 0)
            return 1;
        temp = myPow(x, n/2);
        if(n%2 == 0)
            return temp*temp;
        else 
        {
            if(n > 0)
                return x*temp*temp;
            else 
                return (temp*temp)/x;
        }
    }
}
