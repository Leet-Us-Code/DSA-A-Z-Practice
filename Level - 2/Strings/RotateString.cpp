class Solution {
public:
    bool rotateString(string A, string B) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        if(A.length() != B.length())
            return false;
        if(A == "" && B == "")
            return true;
        for(int i = 0; i < A.length(); i++)
        {
            if(A.substr(i, B.length()) == B)
                return false;
        }
        string newString = A + A;
        int n = newString.length();
        for(int i = 0; i < n-B.length(); i++)
        {
            if(newString.substr(i,B.length()) == B)
                return true;
        }
        return false;
    }
};
