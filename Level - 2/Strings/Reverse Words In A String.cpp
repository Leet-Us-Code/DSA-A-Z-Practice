class Solution {
public:
    string reverseWords(string s) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int i, j;
        i = 0, j = 0;
        while(i < s.length() && j < s.length())
        {
            if(s[i] == ' ')
            {
                s[j] = s[i];
                j++;
                while(i < s.length() && s[i] == ' ')
                    i++;
            }
            else
            {
                s[j] = s[i];
                j++;
                i++;
            }
        }
        s = s.substr(0,j);
        reverse(s.begin(), s.end());
        // //do this part everytime -> check all the wrong answers
        if(s[0] == ' ')
        {
            s = s.substr(1, s.length()-1);
        }
        if(s[s.length()-1] == ' ')
        {
            s = s.substr(0,s.length()-1);
        }
        j = 0;
        for(i = 0; i < s.length(); i++)
        {
            while(i < s.length() && s[i] != ' ')
            {
                i++;
            }
            int r = i - 1;
            i++;
            int l = j;
            while(l <= r)
            {
                swap(s[l], s[r]);
                l++;
                r--;
            }
            j = i;
        }
        return s;
    }
};
