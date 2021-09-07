class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool isPalindrome(string s)
    {
        int n = s.length();
        for(int i = 0; i < n; i++)
        {
            if(s[i] != s[n-1-i])
                return false;
        }
        return true;
    }
    void helper(string s, vector<string> &temp, vector<vector<string>> &res)
    {
        if(s.length() == 0)
        {
            res.push_back(temp);
            return;
        }
        for(int i = 0; i < s.length(); i++)
        {
            string s1 = s.substr(0, i+1);
            string s2 = s.substr(i+1);
            if(isPalindrome(s1))
            {
                temp.push_back(s1);
                helper(s2, temp, res);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> temp;
        helper(s, temp, res);
        return res;
    }
};
