class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void reverseString(vector<char>& s) {
        int n = s.size();
        for(int i = 0; i < (n/2); i++)
        {
            swap(s[i], s[n-1-i]);
        }
    }
};
