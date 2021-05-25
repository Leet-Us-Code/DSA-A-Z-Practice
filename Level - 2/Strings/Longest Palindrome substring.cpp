class Solution {
public:
    bool isPalindrome(string s)
    {
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] != s[s.length() - 1 - i])
                return false;
        }
        return true;
    }
    string longestPalindrome(string s) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        if(s.length() <= 1)
            return s;
        if(isPalindrome(s))
            return s;
        int n = s.length();
        int maxLen = 1;
        int r, l;
        int start = 0;
        for(int i = 1; i < n; i++)
        {
            //odd length palindromes 
            r = i+1;
            l = i-1;
            while(l >= 0 && r < n && s[l] == s[r])
            {
                if(maxLen < r-l+1)
                {
                    start = l;
                    maxLen = r-l+1;
                }
                r++;
                l--;
            }
            //even length palindromes
            r = i;
            l = i-1;
            while(l >= 0 && r < n && s[l] == s[r])
            {
                if(maxLen < r-l+1)
                {
                    start = l;
                    maxLen = r-l+1;
                }
                r++;
                l--;
            }
        }
        return s.substr(start, maxLen);
    }
};
