class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    string helper(string s1, string s2)
    {
        int cntr = 0;
        string s;
        for(int i = 0; i < min(s1.length(), s2.length()); i++)
        {
            if(s1[i] != s2[i])
                break;
            cntr++;
        }
        return s1.substr(0, cntr);
    }
    string longestCommonPrefix(vector<string>& strs) {
        string res;
        if(strs.size() == 1)
            return strs[0];
        res = helper(strs[0], strs[1]);
        for(int i = 2; i < strs.size(); i++)
        {
            res = helper(res, strs[i]);
        }
        return res;
    }
};
