class Solution {
public:
    void helper(int n, string &s, vector<string> &res, int open, int close)
    {
        if(open == n && close == n)
        {
            res.push_back(s);
            return;
        }
        if(open < n)
        {
            s.push_back('(');
            helper(n, s, res, open + 1, close);
            s.pop_back();
        }
        if(open > close)
        {
            s.push_back(')');
            helper(n, s , res, open, close + 1);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<string> res; 
        string s;
        int open = 0; // number of open paranethessis
        int close = 0; // number of closed parenthesis
        helper(n, s, res, open, close);
        return res;
    }
};
