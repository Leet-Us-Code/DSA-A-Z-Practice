//Got the logic -> Couldnt code on time : (
class Solution {
public:
    int countPalindromicSubsequence(string s) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int res = 0;
        for(int i = 0; i < 26; i++)
        {
            char ch = (char)(i + 'a');
            int ind1 = -1, ind2 = -1;
            for(int j = 0; j < s.length(); j++)
            {
                if(s[j] == ch)
                {
                    if(ind1 == -1)
                    {
                        ind1 = j;
                        ind2 = j;
                    }
                    else
                    {
                        ind2 = j;
                    }
                }
            }
            vector<bool> vis(26, false);
            int cntr = 0;
            if(ind1 == ind2)
                continue;
            for(int j = ind1+1; j < ind2; j++)
            {
                if(!vis[s[j]-'a'])
                {
                    cntr++;
                    vis[s[j]-'a'] = true;
                }
            }
            res += cntr;
        }
        return res;
    }
};
