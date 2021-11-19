class Solution{
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LASKHMI NARAYANA, BHADRE NARAYANA
    static long largestPrimeFactor(int n) {
        // code here
        int lpf = 1;
        while(n%2 == 0)
        {
            lpf = 2;
            n = n/2;
        }
        for(int i = 3; i*i <= n; i++)
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
}
