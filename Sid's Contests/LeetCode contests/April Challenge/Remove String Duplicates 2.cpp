class Solution {
public:
    string removeDuplicates(string s, int k) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        stack<pair<char, int>> x;
        int cntr = 1;
        for(int i = 0; i < s.length(); i++)
        {
            if(x.empty())
            {
                cntr = 1;
                x.push(make_pair(s[i], cntr));
            }
            else 
            {
                if(x.top().first == s[i])
                {
                    cntr = x.top().second;
                    cntr++;
                    if(cntr == k)
                    {
                        while(!x.empty() && x.top().first == s[i])
                        {
                            x.pop();
                        }
                        cntr = 1;
                    }
                    else
                    {
                        x.push(make_pair(s[i], cntr));
                    }
                }
                else
                {
                    cntr = 1;
                    x.push(make_pair(s[i], cntr));
                }
            }
        }
        string res;
        while(!x.empty())
        {
            res.push_back(x.top().first);
            x.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
