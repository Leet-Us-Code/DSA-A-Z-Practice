class Solution{
public: 
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    long long int largestPrimeFactor(int n){
        // code here
        vector<int> spf(n+1, -1);
        for(int i = 0; i <= n; i++)
        spf[i] = i;
        for(int i = 2; i*i <= n; i++)
        {
            if(spf[i] == i)
            {
                for(int j = i*i; j <= n; j+=i)
                {
                    if(spf[j] == j)
                    spf[j] = i;
                }
            }
        }
        int x = n;
        int maxEle = INT_MIN;
        while(x != 1)
        {
            maxEle = max(spf[x], maxEle);
            x = x/spf[x];
        }
        return maxEle;
    }
};
