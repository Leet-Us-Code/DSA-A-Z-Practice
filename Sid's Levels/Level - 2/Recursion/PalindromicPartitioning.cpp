class Solution {
public:
    bool isPalindrome(string s)
    {
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] != s[s.length() - i - 1])
                return false;
        }
        return true;
    }
    void partition(vector<vector<string>> &res, vector<string> &x, string s)
    {
        if(s.length() == 0)
        {
            res.push_back(x);
        }
        for(int i = 0; i < s.length(); i++)
        {
            //take the substring from 0 to i 
            string beg = s.substr(0, i+1);
            if(isPalindrome(beg))
            {
                x.push_back(beg);
                partition(res, x, s.substr(i+1));
                x.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<vector<string>> res;
        vector<string> x;
        partition(res, x, s);
        return res;
    }
};
