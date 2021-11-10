class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    string convert(string s, int numRows) {
        vector<string> res(numRows);
        int j = 1, i = 0;
        int n = s.length();
        if(numRows == 1)
            return s;
        while(i < n)
        {
            res[0].push_back(s[i]);
            i += 2*(numRows-1);
        }
        while(j < numRows-1)
        {
            char dir = 'D';
            i = j;
            while(i < n)
            {
                res[j].push_back(s[i]);
                if(dir == 'D')
                {
                    i += 2*(numRows-j-1);
                    dir = 'U';
                }
                else
                {
                    i += 2*j;
                    dir = 'D';
                }
            }
            j++;
        }
        i = j;
        while(i < n)
        {
            res[j].push_back(s[i]);
            i += 2*(numRows-1);
        }
        string sid = "";
        for(int i = 0; i < res.size(); i++)
            sid += res[i];
        return sid;
    }
};
