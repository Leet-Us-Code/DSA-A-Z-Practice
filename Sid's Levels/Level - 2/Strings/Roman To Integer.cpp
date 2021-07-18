class Solution {
public:
    int romanToInt(string s) {
        //OM GAN GANAPATHAYE NAMO NAMAH
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<int> x;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'I')
            {
                x.push_back(1);
            }
            else if(s[i] == 'V')
            {
                x.push_back(5);
            }
            else if(s[i] == 'X')
            {
                x.push_back(10);
            }
            else if(s[i] == 'L')
            {
                x.push_back(50);
            }
            else if(s[i] == 'C')
            {
                x.push_back(100);
            }
            else if(s[i] == 'D')
            {
                x.push_back(500);
            }
            else if(s[i] == 'M')
            {
                x.push_back(1000);
            }
        }
        int num = 0;
        int n = x.size();
        int c = n-1;
        while(c >= 0)
        {
            if(c > 0 && x[c] > x[c-1])
            {
                num += (x[c] - x[c-1]);
                c = c - 2;
            }
            else 
            {
                num += x[c];
                c--;
            }
        }
        return num;
    }
};
