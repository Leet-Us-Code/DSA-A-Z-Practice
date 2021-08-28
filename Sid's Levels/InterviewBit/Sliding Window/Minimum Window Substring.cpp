class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    string minWindow(string s, string t) {
        int fs[128] = {0}, ft[128] = {0};
        for(int i = 0; i < t.length(); i++)
            ft[t[i]]++;
        int start = -1, minLen = INT_MAX, l = 0, r = 0;
        int matched = 0;
        int n = s.length();
        while(r < n)
        {
            int cur = r;
            fs[s[r]]++;
            r++;
            if(ft[s[cur]] != 0 && fs[s[cur]] <= ft[s[cur]])
                matched++;
            if(matched == t.length())
            {
                while(l < r && (ft[s[l]] == 0 || ft[s[l]] < fs[s[l]]))
                {
                    fs[s[l]]--;
                    l++;
                }
                if(minLen > r-l)
                {
                    minLen = r-l;
                    start = l;
                }
            }
        }
        if(start == -1)
            return "";
        return s.substr(start, minLen);    
    }
};
