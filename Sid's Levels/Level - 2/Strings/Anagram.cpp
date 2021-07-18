class Solution {
public:
    bool isAnagram(string s, string t) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int freq1[128] = {0};
        int freq2[128] = {0};
        for(int i = 0; i < s.length(); i++)
        {
            freq1[s[i]]++;
        }
        for(int i = 0; i < t.length(); i++)
        {
            freq2[t[i]]++;
        }
        for(int i = 0; i < 128; i++)
        {
            if(freq1[i] != freq2[i])
                return false;
        }
        return true;
    }
};
