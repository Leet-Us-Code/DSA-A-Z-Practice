class Solution {
public:
    long long int mod = 1000000007;
    long long int power(long long int x, long long int y)
    {
        long long int res = 1;
        x = x%mod;
        if(x == 0)
            return 0;
        while(y > 0)
        {
            if(y&1)
                res = (res*x)%mod;
            y = y>>1;
            x = (x*x)%mod;
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        if(n == 0)
            return 0;
        else 
        {
            if(n%2 != 0)
            {
                long long int term = (n/2) + 1;
                long long int start = 5;
                long long int dif = 20;
                long long int x = power(dif, term-1)%mod;
                long long int prod = (start)*(power(dif, term-1));
                return prod%mod;
            }
            else
            {
                long long int term = (n/2);
                long long int start = 20;
                long long int dif = 20;
                long long int x = power(dif, term-1)%mod;
                long long int prod = (start)*(power(dif, term-1));
                return prod%mod;
            }
        }
    }
};
