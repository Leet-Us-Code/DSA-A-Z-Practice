class Solution {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LASKHMI NARAYANA, BHADRE NARAYANA
    public void reverseString(char[] s) {
        int n = s.length; 
        for(int i = 0; i < n/2; i++)
        {
            char temp = s[i];
            s[i] = s[n-1-i];
            s[n-1-i] = temp;
        }
    }
}
