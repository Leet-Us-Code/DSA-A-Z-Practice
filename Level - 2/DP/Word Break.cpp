class Solution {
public:
    //OM GAN GANAPTHAYE NAMO NAMAH
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool helper(string s, set<string> dict)
    {
        if(s.length() == 0)
            return true;
        int n = s.length();
        bool wb[n+1];
        memset(wb, 0, n+1);
        for(int i = 1; i <= n; i++)
        {
            if(wb[i] == false && dict.find(s.substr(0,i)) != dict.end())
                wb[i] = true;
            if(wb[i] == true)
            {
                if(i == n)
                    return true;
                //after splitting the prefix lets see the remaining part
                for(int j = i+1; j <= n; j++)
                {
                    if(wb[j] == false && dict.find(s.substr(i, j-i)) != dict.end())
                        wb[j] = true;
                    if(j == n && wb[j] == true)
                        return true;
                }
            }
        }
        return false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        //adding all the dictionary words in a set so that it ll be easier to perform a lookup 
        set<string> dict;
        for(auto &str: wordDict)
        {
            dict.insert(str);
        }
        return helper(s, dict);
    }
};
