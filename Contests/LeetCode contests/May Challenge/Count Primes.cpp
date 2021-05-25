class Solution {
public:
    int countPrimes(int n) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        bool prime[n+1];
        int cntr = 0;
        memset(prime, true, sizeof(prime));
        for(int i = 2; i*i <= n; i++)
        {
            if(prime[i] == true)
            {
                for(int j = i*i; j <= n; j += i)
                {
                    prime[j] = false;
                }
            }
        }
        for(int i = 2; i < n; i++)
        {
            if(prime[i])
                cntr++;
        }
        return cntr;
    }
};
