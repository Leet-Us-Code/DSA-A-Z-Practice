class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool areRotations(string s1,string s2)
    {
        // Your code here
        string res = s1 + s1; 
        if(s1.length() != s2.length())
        return false;
        if(res.find(s2) != string::npos)
        return true;
        return false;
    }
};
