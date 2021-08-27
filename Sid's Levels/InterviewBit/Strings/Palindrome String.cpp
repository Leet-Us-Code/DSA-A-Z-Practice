class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool checkPal(string s)
    {
        int n = s.length();
        for(int i = 0; i < n/2; i++)
        {
            if(s[i] != s[n-1-i])
                return false;
        }
        return true;
    }
    bool isPalindrome(string s) {
        string temp;
        for(int i = 0; i < s.length(); i++)
        {
            if(isalpha(s[i]) || isdigit(s[i]))
            {
                if(isalpha(s[i]))
                    temp.push_back(tolower(s[i]));
                else 
                    temp.push_back(s[i]);
            }
        }
        return checkPal(temp);
    }
};
