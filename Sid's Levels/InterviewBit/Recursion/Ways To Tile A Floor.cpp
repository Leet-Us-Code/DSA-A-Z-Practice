class Solution {
  public:
  //OM GAN GANAPATHAYE NAMO NAMAH 
  //JAI SHRI RAM 
  //JAI BAJRANGBALI 
  //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
  long long int mod = pow(10, 9) + 7;
    long long numberOfWays(long long n) {
        //code here
        if(n == 1 || n == 2)
        return n;
        else 
        return (numberOfWays(n-1)%mod + numberOfWays(n-2)%mod)%mod;
    }
};
