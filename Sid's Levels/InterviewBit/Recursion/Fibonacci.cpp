class Solution {
  public:
  //OM GAN GANAPATHAYE NAMO NAMAH 
  //JAI SHRI RAM 
  //JAI BAJRANGBALI 
  //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
  long long int mod = pow(10, 9) + 7;
    long long int nthFibonacci(long long int n){
        // code here
        if(n == 1 || n == 2)
        return 1;
        else
        {
            return (nthFibonacci(n-1)%mod + nthFibonacci(n-2)%mod)%mod;
        }
    }
};
