class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void generateHelper(string s, int open, int close, int n, vector<string> &res)
    {
        if(close == n)
        {
            res.push_back(s);
            return;
        }
        if(open < n)
        {
            s.push_back('(');
            generateHelper(s, open+1, close, n, res);
            s.pop_back();
        }
        if(open > close)
        {
            s.push_back(')');
            generateHelper(s, open, close+1, n, res);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string s;
        int open = 0, close = 0;
        generateHelper(s, open, close, n, res);
        return res;
    }
};
