class Solution {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LASKHMI NARAYANA, BHADRE NARAYANA
    public static int min(int x, int y){
        if(x > y)
            return y;
        return x;
    }
    public String minWindow(String s, String t) {
        int[] wantedFreq = new int[256];
        int[] curFreq = new int[256];
        for(int i = 0; i < 256; i++)
        {
            wantedFreq[i] = 0;
            curFreq[i] = 0;
        }
        StringBuilder res = new StringBuilder(); 
        int start = -1; 
        int maxLen = 1000000; 
        int n = s.length(), m = t.length();
        for(int i = 0; i < m; i++)
        {
            char ch = t.charAt(i);
            wantedFreq[ch]++;
        }
        int l = 0, matched = 0;
        for(int i = 0; i < n; i++)
        {
            char ch = s.charAt(i);
            curFreq[ch]++;
            //check if the character is useful or not 
            if(wantedFreq[ch] > 0 && wantedFreq[ch] >= curFreq[ch])
            {
                matched++;
            }
            if(matched == t.length())
            {
                //start removing the useless characters
                while(i > l && (wantedFreq[s.charAt(l)] == 0 || wantedFreq[s.charAt(l)] < curFreq[s.charAt(l)]))
                {
                    curFreq[s.charAt(l)]--;
                    l++;
                }
                if(maxLen > i-l+1)
                {
                    maxLen = i-l+1;
                    start = l;
                }
            }
            
        }
        if(start == -1)
            return "";
        for(int i = start; i < start+maxLen; i++)
        {
            res.append(s.charAt(i));
        }
        return res.toString();
    }
}
