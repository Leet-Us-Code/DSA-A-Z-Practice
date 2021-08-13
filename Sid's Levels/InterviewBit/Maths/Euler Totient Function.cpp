class Solution{
public:
    // function to find totient of n
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    long long ETF(long long n){
        // code here
        double res = (double)n; 
        vector<int> p;
        long long int x = n;
        if(x%2 == 0)
        {
            p.push_back(2);
            while(x%2 == 0)
            {
                x = x/2;
            }
        }
        for(int i = 3; i*i <= n; i += 2)
        {
            if(x%i == 0)
            {
                p.push_back(i);
                while(x%i == 0)
                {
                    x = x/i;
                }
            }
        }
        if(x > 1)
        p.push_back(x);
        for(int i = 0; i < p.size(); i++)
        {
            double temp = (1 - ((double)1/ (double)p[i]));
            res *= temp;
        }
        return (long long )res;
    }
};
