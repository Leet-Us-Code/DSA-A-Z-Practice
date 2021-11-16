class Solution {   
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    public boolean isAnagram(String s, String t) {
        int[] freq1 = new int[256];
        int[] freq2 = new int[256];
        for(int i = 0; i < 256; i++)
        {
            freq1[i] = 0;
            freq2[i] = 0;
        }
        for(int i = 0; i < s.length(); i++)
        {
            char ch = s.charAt(i);
            freq1[ch]++;
        }
        for(int i = 0; i < t.length(); i++)
        {
            char ch = t.charAt(i);
            freq2[ch]++;
        }
        for(int i = 0; i < 256; i++)
        {
            if(freq1[i] != freq2[i])
                return false;
        }
        return true;
    }
}
