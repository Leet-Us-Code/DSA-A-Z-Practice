class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int xHigh, yHigh;
        if(x == 1)
        {
            xHigh = bound;
        }
        if(y == 1)
        {
            yHigh = bound;
        }
        if(x != 1)
        {
            xHigh = (int)(log(bound)/log(x));
        }
        if(y != 1)
        {
            yHigh = (int)(log(bound)/log(y));
        }
        set<int> s;
        for(int i= 0; i <= xHigh; i++)
        {
            for(int j = 0; j <= yHigh; j++)
            {
                if(pow(x,i) + pow(y,j) <= bound)
                {
                    s.insert(pow(x,i) + pow(y,j));
                }
                if(y == 1)
                    break;
            }
            if(x == 1)
                break;
        }
        vector<int> res;
        for(auto it = s.begin(); it != s.end(); it++)
        {
            res.push_back(*it);
        }
        sort(res.begin(), res.end());
        return res;
    }
};
