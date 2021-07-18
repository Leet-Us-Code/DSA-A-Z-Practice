class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    string mp[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    void helper(string digits, string &temp, vector<string> &res, int ind)
    {
        if(ind == digits.length())
        {
            res.push_back(temp);
            return;
        }
        int dig = digits[ind] - '0';
        for(int i = 0; i < mp[dig].length(); i++)
        {
            temp.push_back(mp[dig][i]);
            helper(digits, temp, res, ind+1);
            temp.pop_back();
        }
        return;
   }
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits == "")
            return res;
        string temp = "";
        helper(digits, temp, res, 0);
        return res;
    }
};
