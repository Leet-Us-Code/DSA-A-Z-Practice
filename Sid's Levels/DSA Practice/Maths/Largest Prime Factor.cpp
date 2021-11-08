class Solution{
public: 
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    long long int largestPrimeFactor(int n){
        // code here
        long long int lpf = 1;
        while(n%2 == 0)
        {
            lpf = 2;
            n = n/2;
        }
        for(int i = 3; i*i <= n; i+=2)
        {
            while(n%i == 0)
            {
                lpf = i;
                n = n/i;
            }
        }
        if(n > 1)
        lpf = n;
        return lpf;
    }
};
