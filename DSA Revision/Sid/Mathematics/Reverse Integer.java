class Solution {
    public int reverse(int x) {
        Integer n = new Integer(x);
        String num = n.toString();
        StringBuilder number = new StringBuilder(num);
        // System.out.println(number.substring(1));
        boolean sign = true; // positive 
        if(number.charAt(0) == '-')
            sign = false;
        if(sign == false)
            number = new StringBuilder(number.substring(1));
        number.reverse();
        int sum = 0;
        for(int i = 0; i < number.length(); i++)
        {
            if(sum <= Math.pow(-2, 31) || sum >= (Math.pow(2, 31)-1))
            return 0;
            sum += (number.charAt(i) - '0')*(Math.pow(10, number.length()-1-i));
        }
        if(sign == false)
            sum = 0 - sum;
        if(sum <= Math.pow(-2, 31) || sum >= (Math.pow(2, 31)-1))
            return 0;
        return sum;
    }
}
