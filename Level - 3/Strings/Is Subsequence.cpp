class Solution {
public:
    bool isSubsequence(string s, string t) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int p1 = 0, p2 = 0;
        int n = s.length(), m = t.length();
        while(p2 < m && p1 < n)
        {
            if(s[p1] == t[p2])
            {
                p1++;
                p2++;
            }
            else
            {
                p2++;
            }
        }
        if(p1 == n)
            return true;
        else
            return false;
    }
};
