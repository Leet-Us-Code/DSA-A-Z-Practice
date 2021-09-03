class Solution
{
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    long long int mod = pow(10, 9) + 7;
    int countFriendsPairings(int n) 
    { 
        // code here
        if(n == 1 || n == 2)
        return n;
        else
        return (countFriendsPairings(n-1)%mod + ((n-1)%mod)*(countFriendsPairings(n-2)%mod)%mod)%mod;
    }
}; 
