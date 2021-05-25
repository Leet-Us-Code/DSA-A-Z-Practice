class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        if(s.length() == 0)
            return 0;
        int freq[256] = {0};
        int l = 0;
        int r = 0;
        int n = s.length();
        int maxL = 1;
        while(l < n && r < n)
        {
            if(freq[s[r]] == 0)
            {
                freq[s[r]]++;
                r++;
            }
            else
            {
                maxL = max(maxL, r - l);
                freq[s[l]]--;
                l++;
            }
        }
        maxL = max(maxL, r-l);
        return maxL;
    }
};
