class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool isSubstring(string s1, string s2)
    {
        int m = s1.length();
        int n = s2.length();
        for(int i = 0; i <= n-m; i++)
        {
            int j = 0;
            for(; j < m; j++)
            {
                if(s1[j] != s2[i+j])
                    break;
                else
                    continue;
            }
            if(j == m)
                return true;
        }
        return false;
    }
    int numOfStrings(vector<string>& patterns, string word) {
        int cntr = 0;
        for(int i = 0; i < patterns.size(); i++)
        {
            if(isSubstring(patterns[i], word))
                cntr++;
        }
        return cntr;
    }
};
