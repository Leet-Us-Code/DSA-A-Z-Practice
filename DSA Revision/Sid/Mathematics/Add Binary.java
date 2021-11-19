//Corrections pending -> I am sure the logic is correct
class Solution {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    public long binaryToInt(String s)
    {
        int n = s.length();
        long sum = 0; 
        for(int i = 0; i < n; i++)
        {
            sum += (s.charAt(i) - '0')*(Math.pow(2, n-1-i));
        }
        return sum;
    }
    public String IntToBinary(long n)
    {
        StringBuilder res = new StringBuilder();
        while(n > 0)
        {
            char ch = (char)((n%2) + '0');
            res.append(ch);
            n = n/2;
        }
        res.reverse();
        return res.toString();
    }
    public String addBinary(String a, String b) {
        long a1 = binaryToInt(a);
        long b1 = binaryToInt(b);
        System.out.println(a1);
        System.out.println(b1);
        long c1 = a1 + b1; 
        if(c1 == 0)
            return "0";
        return IntToBinary(c1);
    }
}
