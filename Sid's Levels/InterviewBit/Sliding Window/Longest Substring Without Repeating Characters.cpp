class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0, l = 0, r = 0;
        int freq[128] = {0}, n = s.length();
        while(r < n)
        {
            int cur = r;
            freq[s[r]]++;
            r++;
            while(l < r && freq[s[cur]] > 1)
            {
                freq[s[l]]--;
                l++;
            }
            maxLen = max(maxLen, r-l);
        }
        return maxLen;
    }
};
