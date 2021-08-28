class Solution{
    public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    string findSubString(string str)
    {
        // Your code goes here   
        int fs[128] = {0}, fp[128] = {0};
        int n = str.length();
        for(int i = 0; i < n; i++)
        {
            fp[str[i]]++;
        }
        int r = 0, l = 0, minLen = INT_MAX;
        int matched = 0;
        int unique = 0;
        int start = -1;
        for(int i = 0; i < 128; i++)
        {
            if(fp[i] != 0)
            unique++;
        }
        while(r < n)
        {
            int cur = r;
            fs[str[r]]++;
            r++;
            if(fs[str[cur]] == 1)
            matched++;
            if(matched == unique)
            {
                //removing useless characters
                while(l < r && (fs[str[l]] > 1))
                {
                    fs[str[l]]--;
                    l++;
                }
                if(minLen > r-l)
                {
                    start = l;
                    minLen = r-l;
                }
            }
        }
        return str.substr(start, minLen);
    }
};
