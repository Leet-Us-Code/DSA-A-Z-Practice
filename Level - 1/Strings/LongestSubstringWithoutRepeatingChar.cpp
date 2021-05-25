class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        if(s == " ")
            return 1;
        if(s.length() == 0)
            return 0;
        else
        {
            int l = 0, r = 0;
            int freq[256] = {0};
            int max = 1 ;
            while(l < s.length() && r < s.length())
            {
                freq[s[r]]++;
                if(freq[s[r]] > 1)
                {
                    if(max < r-l)
                        max = r-l;
                    freq[s[l]]--;
                    l++;
                    freq[s[r]]--;
                }
                else
                {
                    r++;
                }
            }
            if(max < r-l)
                max = r-l;
            return max;
        }
    }
};
