class Solution {
public:
    int max(int a, int b)
    {
        if(a > b)
            return a;
        else
            return b;
    }
    int maxProduct(vector<string>& words) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int freq[1000][26];
        memset(freq, 0, sizeof(freq));
        for(int i = 0; i < words.size(); i++)
        {
            string s = words[i];
            for(int j = 0; j < s.length(); j++)
            {
                int ind = (int)(s[j] - 'a');
                freq[i][ind] = 1;
            }
        }
        int maxLen = 0;
        for(int i = 0; i < words.size(); i++)
        {
            string s1 = words[i];
            for(int j = i+1; j < words.size(); j++)
            {
                string s2 = words[j];
                int flag = 0;
                for(int k = 0; k < 26; k++)
                {
                    if(freq[i][k] == 1 && freq[j][k] == 1)
                    {
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0)
                    maxLen = max(maxLen , s1.length()*s2.length());
            }
        }
        
        return maxLen;
    }
};
