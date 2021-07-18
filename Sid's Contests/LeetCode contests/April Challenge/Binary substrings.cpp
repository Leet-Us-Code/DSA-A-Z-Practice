class Solution {
public:
    int countBinarySubstrings(string s) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<int> x;
        for(int i = 0; i < s.length(); i++)
        {
            int c = 1;
            while(i < s.length()-1 && s[i] == s[i+1])
            {
                c++;
                i++;
            }
            x.push_back(c);
        }
        int sum = 0;
        for(int i = 0; i < x.size()-1; i++)
        {
            sum += min(x[i], x[i+1]);
        }
        return sum;
    }
};
