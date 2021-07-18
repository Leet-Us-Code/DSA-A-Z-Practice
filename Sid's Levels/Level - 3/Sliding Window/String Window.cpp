class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    string minWindow(string s, string t) {
        int fp[256] = {0}; // map for pattern 
        int fs[256] = {0}; // map for window of string s 
        int cntr = 0; // count of matching characters of window with pattern 
        int start = 0, startInd = -1, minLen = INT_MAX; 
        for(int i = 0; i < t.length(); i++)
        {
            fp[t[i]]++;
        }
        for(int i = 0; i < s.length(); i++)
        {
            //expand the window 
            char ch = s[i];
            fs[ch]++;
            //count how many characters have been matched till now 
            if(fp[ch] != 0 && fs[ch] <= fp[ch])
            {
                cntr++;
            }
            //if all the characters have been matched then start decreasing the window size 
            if(cntr == t.length())
            {
                //start removing unwanted characters -> those not present in pattern and those with higher frequency than required
                while(fp[s[start]] == 0 || fs[s[start]] > fp[s[start]])
                {
                    fs[s[start]]--;
                    start++;
                }
                //update window 
                int windowSize = i - start + 1;
                if(windowSize < minLen)
                {
                    minLen = windowSize;
                    startInd = start;
                }
            }
        }
        if(startInd == -1)
            return "";
        return s.substr(startInd, minLen);
    }
};
