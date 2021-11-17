class Solution {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    public static int max(int x, int y)
    {
        if(x > y)
            return x;
        return y;
    }
    public int lengthOfLongestSubstring(String s) {
        int[] freq = new int[256];
        for(int i = 0; i < 256; i++)
        {
            freq[i] = 0;
        }
        int l = 0;
        int n = s.length();
        int maxLen = 0;
        for(int r = 0; r < n; r++)
        {
            char ch = s.charAt(r);
            freq[ch]++;
            if(freq[ch] > 1)
            {
                while(r > l && freq[ch] > 1)
                {
                    freq[s.charAt(l)]--;
                    l++;
                }   
            }
            maxLen = max(maxLen, r-l+1);
        }
        return maxLen;
    }
}
