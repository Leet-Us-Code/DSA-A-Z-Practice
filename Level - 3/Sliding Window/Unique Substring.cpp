class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int r = 0, l = 0, maxLen = 0;
        int freq[128] = {0};
        int n = s.length();
        while(r < n)
        {
            int cur = r;
            freq[s[r]]++;
            r++;
            while(freq[s[cur]] > 1 && l < r)
            {
                freq[s[l]]--;
                l++;
            }
            maxLen = max(maxLen, r-l);
        }
        return maxLen;
    }
};
