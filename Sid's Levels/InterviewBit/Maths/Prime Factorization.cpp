class Solution{
public: 
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    long long int largestPrimeFactor(int n){
        // code here
        int maxEle = INT_MIN;
        int x = n;
        while(x%2 == 0)
        {
            maxEle = max(maxEle, 2);
            x = x/2;
        }
        for(int i = 3; i*i <= n; i += 2)
        {
            while(x%i == 0)
            {
                maxEle = max(maxEle, i);
                x = x/i;
            }
        }
        if(x > 1)
        maxEle = max(maxEle, x);
        return maxEle;
    }
};
