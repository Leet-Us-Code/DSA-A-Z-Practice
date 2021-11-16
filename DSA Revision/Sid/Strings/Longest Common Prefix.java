class Solution {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    public static StringBuilder lcp(String s1, String s2)
    {
        int n = s1.length();
        int m = s2.length();
        int i = 0, j = 0;
        while(i < n && j < m)
        {
            if(s1.charAt(i) == s2.charAt(j))
            {
                i++;
                j++;
            }
            else 
                break;
        }
        StringBuilder res = new StringBuilder();
        for(int ind = 0; ind < i; ind++)
        {
            res.append(s1.charAt(ind));
        }
        return res;
    }
    public String longestCommonPrefix(String[] strs) {
        StringBuilder lc = new StringBuilder(strs[0]);
        for(int i = 1; i < strs.length; i++)
        {
            lc = lcp(lc.toString(), strs[i]);
        }
        return lc.toString();
    }
}
