class Solution {
public:
    string longestPalindrome(string s) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int maxLen = 1;
        if(s.length() <= 1)
            return s;
        else
        {
            string maxString;
            int l, r;
            int n = s.length();
            for(int i = 1; i < n; i++)
            {
                //odd length palindromes
                l = i - 1;
                r = i + 1;
                while(l >= 0 && r < n && s[l] == s[r])
                {
                    if(r - l + 1 > maxLen)
                    {
                        maxLen = r - l + 1;
                        maxString = s.substr(l,r-l+1);
                    }
                    l--;
                    r++;
                }
                //even length palindromes 
                l = i - 1;
                r = i;
                while(l >= 0 && r < n && s[l] == s[r])
                {
                    if(r - l + 1 > maxLen)
                    {
                        maxLen = r - l + 1;
                        maxString = s.substr(l,r-l+1);
                    }
                    l--;
                    r++;
                }
            }
            if(maxLen == 1)
                return s.substr(0,1);
            else
                return maxString;
        }
    }
};
