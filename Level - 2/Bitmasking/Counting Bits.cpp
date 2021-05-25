class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int count(int n)
    {
        int c = 0;
        while(n)
        {
            n = n&(n-1);
            c++;
        }
        return c;
    }
    vector<int> countBits(int num) {
        vector<int> res;
        for(int i = 0; i <= num; i++)
        {
            res.push_back(count(i));
        }
        return res;
    }
};
