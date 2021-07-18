class Solution {
public:
    string toLowerCase(string s) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        string s1;
        for(int i = 0; i < s.length(); i++)
        {
            if(isupper(s[i]))
            {
                s1.push_back(tolower(s[i]));
            }
            else
            {
                s1.push_back(s[i]);
            }
        }
        return s1;
    }
};
