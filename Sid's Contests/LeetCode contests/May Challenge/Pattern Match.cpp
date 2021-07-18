class Solution {
public:
    bool match(string s1, string s2)
    {
        char freq1[26], freq2[26];
        for(int i = 0; i < 26; i++)
        {
            freq1[i] = '0';
            freq2[i] = '0'; //initialize
        }
        for(int i = 0; i < s1.length(); i++)
        {
            int ind1 = s1[i] - 'a';
            int ind2 = s2[i] - 'a';
            if(freq1[ind1] == '0')
            {
                freq1[ind1] = s2[i];
            }
            if(freq2[ind2] == '0')
            {
                freq2[ind2] = s1[i];
            }
            if(freq1[ind1] != s2[i] || freq2[ind2] != s1[i])
                return false;
        }
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        //OM NAMO NARAYANAYA
        vector<string> res;
        for(int i = 0; i < words.size(); i++)
        {
            string word = words[i];
            if(match(word, pattern))
                res.push_back(word);
        }
        return res;
    }
};
