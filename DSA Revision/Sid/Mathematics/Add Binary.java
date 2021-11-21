//Binary addition process
class Solution {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    public String addBinary(String a, String b) {
        StringBuilder sb = new StringBuilder();
        int i = a.length()-1, j = b.length()-1;
        int sum = 0, carry = 0;
        while(i >= 0 || j >= 0)
        {
            sum = carry;
            if(i >= 0)
                sum += a.charAt(i) - '0';
            if(j >= 0)
                sum += b.charAt(j) - '0';
            sb.append(sum%2);
            carry = sum/2;
            i--;
            j--;
        }
        if(carry != 0)
            sb.append(carry);
        sb.reverse();
        return sb.toString();
    }
}
