class Solution {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    public static boolean pal(String s)
    {
        int n = s.length();
        for(int i = 0; i < n/2; i++)
        {
            if(s.charAt(i) != s.charAt(n-1-i))
                return false;
        }
        return true;
    }
    public boolean isPalindrome(String s) {
        StringBuilder mod = new StringBuilder();
        int n = s.length();
        for(int i = 0; i < n; i++)
        {
            if(Character.isUpperCase(s.charAt(i)))
            {
                mod.append(Character.toLowerCase(s.charAt(i)));
            }
            else if(Character.isLetterOrDigit(s.charAt(i)))
            {
                mod.append(s.charAt(i));
            }
        }
        return pal(mod.toString());
    }
}
