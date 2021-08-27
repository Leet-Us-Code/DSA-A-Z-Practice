class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void reverseSub(string &s, int l, int r)
    {
        // cout << l << " " << r << endl;
        int n = r - l + 1;
        for(int i = 0; i < n/2; i++)
        {
            swap(s[l+i], s[l+(n-1-i)]);
        }
    }
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int n = s.length();
        //remove extra spaces 
        int r = 0, l = 0;
        while(l < n && s[l] == ' ')
            l++;
        for(;l < n; l++)
        {
            while(l < n-1 && s[l] == ' ' && s[l] == s[l+1])
                l++;
            s[r++] = s[l];
        }
        int x = r-1;
        while(x >= 0 && s[x] == ' ')
            x--;
        // cout << s.substr(0, x+1) << endl;
        int j = 0, i = 0;
        n = x+1;
        while(i < n)
        {
            while(j < n && s[j] != ' ')
                j++;
            int start = i;
            int end = j-1;
            reverseSub(s, start, end);
            i = j+1;
            j++;
        }
        return s.substr(0, x+1);
    }
};
