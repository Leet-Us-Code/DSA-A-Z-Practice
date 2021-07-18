class Solution {
public:
    bool canBeTyped(string s, string b)
    {
        int freq[26] = {0};
        for(int i = 0; i < s.length(); i++)
        {
            freq[s[i] - 'a']++;
        }
        for(int i = 0; i < b.length(); i++)
        {
            if(freq[b[i] - 'a'] != 0)
                return false;
        }
        return true;
    }
    int canBeTypedWords(string text, string brokenLetters) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<string> res;
        string temp;
        for(int i = 0; i < text.length(); i++)
        {
            if(text[i] != ' ')
                temp.push_back(text[i]);
            else
            {
                res.push_back(temp);
                temp.clear();
            }
        }
        res.push_back(temp);
        int cntr = 0;
        for(int i = 0; i < res.size(); i++)
        {
            if(canBeTyped(res[i], brokenLetters))
                cntr++;
        }
        return cntr;
    }
};
