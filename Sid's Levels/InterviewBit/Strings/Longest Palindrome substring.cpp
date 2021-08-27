class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    string longestPalindrome(string s) {
        int l, r;
        int n = s.length();
        int maxLen = 1, start = 0, end = 0;
        for(int i = 1; i < n-1; i++)
        {
            //odd palindrome
            l = i - 1;
            r = i + 1;
            while(l >= 0 && r < n && s[l] == s[r])
            {
                if(maxLen < r-l+1)
                {
                    start = l;
                    end = r;
                    maxLen = r-l+1;
                }
                l--;
                r++;
            }
            
        }
        for(int i = 1; i < n; i++)
        {
            //even palindrome 
            l = i - 1;
            r = i;
            while(l >= 0 && r < n && s[l] == s[r])
            {
                if(maxLen < r-l+1)
                {
                    start = l;
                    end = r;
                    maxLen = r-l+1;
                }
                l--;
                r++;
            }
        }
        return s.substr(start, maxLen);
    }
};
