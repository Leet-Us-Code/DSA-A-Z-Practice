class Solution
{
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    vector<int> sieveOfEratosthenes(int n)
    {
        // Write Your Code here
        vector<bool> sieve(n+1, false); // false indicates prime 
        for(int i = 2; i*i <= n; i++)
        {
            //if the number is not yet marked prime 
            if(sieve[i] == false)
            {
                for(int j = i*i; j <= n; j += i)
                {
                    sieve[j] = true;
                }
            }
        }
        vector<int> res;
        for(int i = 2; i <= n; i++)
        {
            if(sieve[i] == false)
            res.push_back(i);
        }
        return res;
    }
};
