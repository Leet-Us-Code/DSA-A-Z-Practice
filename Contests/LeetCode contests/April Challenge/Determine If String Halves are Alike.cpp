class Solution {
public:
    bool isVowel(char ch)
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            return true;
        else
            return false;
    }
    bool halvesAreAlike(string s) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int c1 = 0, c2 = 0;
        int n = s.length();
        if(n%2 != 0)
            return false;
        int i = 0, j = n/2;
        while(i < (n/2) && j < n)
        {
            if(isVowel(s[i]))
                c1++;
            if(isVowel(s[j]))
                c2++;
            i++;
            j++;
        }
        if(c1 == c2)
            return true;
        else
            return false;
    }
};
