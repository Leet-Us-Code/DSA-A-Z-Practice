class Solution {
public:
    string helper(int cur, string &s, int n)
    {
        if(cur > n)
            return s;
        else if(cur == 1)
        {
            s.push_back('1');
            return helper(cur+1, s, n);
        }
        else 
        {
            string s1;
            for(int i = 0; i < s.length(); i++)
            {
                int c = 1;
                while(i < s.length()-1 && s[i] == s[i+1])
                {
                    i++;
                    c++;
                }
                s1.push_back((char)(c+'0'));
                s1.push_back((char)(s[i]));
            }
            return helper(cur+1, s1, n);
        }
    }
    string countAndSay(int n) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        string s;
        return helper(1, s, n);
    }
};
