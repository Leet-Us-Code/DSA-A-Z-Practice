class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    string mp[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    void helper(string digits, int ind, string s, vector<string> &res)
    {
        if(ind == digits.length())
        {
            res.push_back(s);
            return;
        }
        int cur = digits[ind] - '0';
        for(int i = 0; i < mp[cur].size(); i++)
        {
            char ch = mp[cur][i];
            s.push_back(ch);
            helper(digits, ind+1, s, res);
            s.pop_back();
        }
        return;
    }
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits == "")
            return res;
        string s;
        int ind = 0;
        helper(digits, ind, s, res);
        return res;
    }
};
