class Solution {
public:
    static bool comp(string s1, string s2)
    {
        if(s1.length() < s2.length())
            return true;
        else
            return false;
    }
    int longestStrChain(vector<string>& words) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        sort(words.begin(), words.end(), comp);
        int res = 0;
        map<string, int> m;
        for(int i = 0; i < words.size(); i++)
        {
            string word = words[i];
            m[word] = 1;
            //check if the predecssor of this word exists in the map or not 
            for(int i = 0; i < word.length(); i++)
            {
                string pred = word;
                pred.erase(pred.begin() + i);
                if(m.find(pred) != m.end())//if the predecssor is found 
                {
                    m[word] = max(m[word], m[pred] + 1);
                }
            }
            res = max(res, m[word]);
        }
        return res;
    }
};
