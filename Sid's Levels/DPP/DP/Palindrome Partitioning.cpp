// Recursive code 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool isPalindrome(string s)
    {
        int n = s.length();
        for(int i = 0; i < n/2; i++)
            if(s[i] != s[n-1-i])
                return false;
        return true;
    }
    void helper(string s, vector<string> &x, vector<vector<string>> &res)
    {
        if(s.length() == 0)
        {
            res.push_back(x);
            return;
        }
        for(int i = 0; i < s.length(); i++)
        {
            string beg = s.substr(0, i+1);
            string rem = s.substr(i+1);
            if(isPalindrome(beg))
            {
                x.push_back(beg);
                helper(rem, x, res);
                x.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> x;
        vector<vector<string>> res;
        helper(s, x, res);
        return res;
    }
};


