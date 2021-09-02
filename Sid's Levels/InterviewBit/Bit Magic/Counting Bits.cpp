class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int countBitsHelper(int n)
    {
        int cntr = 0;
        while(n)
        {
           cntr++;
            n = n&(n-1);
        }
        return cntr;
    }
    vector<int> countBits(int n) {
        vector<int> res;
        for(int i = 0; i <= n; i++)
        {
            int x = countBitsHelper(i);
            res.push_back(x);
        }
        return res;
    }
};
