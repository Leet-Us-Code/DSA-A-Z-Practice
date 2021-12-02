class Solution
{
    public long countFriendsPairings(int n) 
    { 
       //code here
       //OM GAN GANAPAATHAYE NAMO NAMAH 
       //JAI SHRI RAM 
       //JAI BAJRANGBALI 
       //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
       if(n == 0 || n == 1)
       return n; 
       else if(n == 2)
       return 2;
       else
       return countFriendsPairings(n-1) + (n-1)*countFriendsPairings(n-2);
    }
}   
