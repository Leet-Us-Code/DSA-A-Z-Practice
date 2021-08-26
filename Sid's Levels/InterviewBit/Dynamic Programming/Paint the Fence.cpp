class Solution{
    public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    long long int mod = pow(10, 9) + 7;
    long long countWays(int n, int k){
        // code here
        if(n == 1)
        return k;
        vector<int> p1(n + 1);
        vector<int> p2(n + 1);
        p1[0] = 0;
        p2[0] = 0;
        p1[1] = 0;
        p2[1] = 0;
        p1[2] = k;
        p2[2] = k*(k-1);
        for(int i = 3; i <= n; i++)
        {
            p1[i] = p2[i-1]%mod;
            p2[i] = (((p1[i-1]%mod)*((k-1)%mod))%mod + ((p2[i-1]%mod)*((k-1)%mod)%mod))%mod;
        }
        return (p1[n]%mod + p2[n]%mod)%mod;
    }
};
