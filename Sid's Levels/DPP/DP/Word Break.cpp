//Recursive solution 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool wordBreak(string s, vector<string>& wordDict) {
        if(s.length() == 0)
            return true; 
        for(int i = 0; i < s.length(); i++)
        {
            //break the string 
            string s1 = s.substr(0, i+1);
            string s2 = s.substr(i+1);
            vector<string> :: iterator it = find(wordDict.begin(), wordDict.end(), s1);
            if(it != wordDict.end())
            {
                if(wordBreak(s2, wordDict))
                    return true;
            }
        }
        return false;
    }
};

//DP (tabulation)
