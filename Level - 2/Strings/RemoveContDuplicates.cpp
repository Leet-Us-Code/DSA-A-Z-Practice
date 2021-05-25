class Solution {
public:
    string removeDuplicateLetters(string s) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int n = s.length();
        int j = 0;
        string s1;
        sort(s.begin(), s.end());
        for(int i = 0; i < n; i++)
        {
            while(i < n - 1 && s[i] == s[i+1])
                i++;
            s[j] = s[i];
            j++;
        }
        s = s.substr(0,j);
        return s;
    }
};
