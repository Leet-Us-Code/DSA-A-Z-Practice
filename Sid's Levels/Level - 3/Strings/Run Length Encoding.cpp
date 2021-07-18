class Solution {
public:
    int compress(vector<char>& chars) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int ind = 0;
        int n = chars.size();
        if(chars.size() < 2)
            return chars.size();
        for(int i = 0; i < n; i++)
        {
            int c = 1;
            chars[ind] = chars[i];
            ind++;
            while(i < n-1 && chars[i] == chars[i+1])
            {
                c++;
                i++;
            }
            if(c == 1)
                continue;
            else if(c >= 10)
            {
                int x = c;
                string s1;
                while(x != 0)
                {
                    char ch = (char)((x%10) + '0');
                    s1.push_back(ch);
                    x = x/10;
                }
                reverse(s1.begin(), s1.end());
                for(int k = 0; k < s1.length(); k++)
                {
                    chars[ind] = s1[k];
                    ind++;
                }
            }
            else
            {
                chars[ind] = (char)(c + '0');
                ind++;
            }
        }
        return ind;
    }
};
