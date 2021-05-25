class Solution {
public:
    string convert(string s, int n) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        if(n == 0 || n == 1)
            return s;
        string res;
        for(int i = 1; i <= n; i++)
        {
            int j = i-1;
            char dir = 'd';
            while(j < s.length())
            {
                if(i == 1 || i == n)
                {
                    res.push_back(s[j]);
                    j += (2*n - 2);
                }
                else
                {
                    if(dir == 'd')
                    {
                        res.push_back(s[j]);
                        j += 2*(n - i);
                        dir = 'u';
                    }
                    else
                    {
                        res.push_back(s[j]);
                        j += 2*(i-1);
                        dir = 'd';
                    }
                }
            }
        }
        return res;
    }
};
