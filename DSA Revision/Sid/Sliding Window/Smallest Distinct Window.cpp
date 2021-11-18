//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LASKHMI NARAYANA, BHADRE NARAYANA
class Solution {
    public String findSubString(String s) {
        // Your code goes here
        int[] freq = new int[256];
        int[] wFreq = new int[256];
        int distinct = 0, wDistinct = 0; 
        int n = s.length();
        for(int i = 0; i < n; i++)
        {
            char ch = s.charAt(i);
            wFreq[ch]++;
            if(wFreq[ch] == 1)
                wDistinct++;
        }
        int start = 0, minLen = 10000000, l = 0;
        for(int r = 0; r < n; r++)
        {
            char ch = s.charAt(r);
            freq[ch]++;
            if(freq[ch] == 1)
                distinct++;
            if(distinct == wDistinct)
            {
                while(r > l && freq[s.charAt(l)] > 1)
                {
                    freq[s.charAt(l)]--;
                    l++;
                }
                if(minLen > r-l+1)
                {
                    minLen = r-l+1;
                    start = l;
                }
                
            }
        }
        StringBuilder sb = new StringBuilder();
        for(int i = start; i < start+minLen; i++)
        {
            sb.append(s.charAt(i));
        }
        return sb.toString();
    }
}
