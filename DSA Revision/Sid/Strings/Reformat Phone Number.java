class Solution {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    public String reformatNumber(String number) {
        int len = 0; 
        for(int i = 0; i < number.length(); i++)
        {
            if(number.charAt(i) != ' ' && number.charAt(i) != '-')
                len++;
        }
        if(len < 3)
            return number;
        char[] numArr = new char[len];
        int ind = 0;
        for(int i = 0; i < number.length(); i++)
        {
            if(number.charAt(i) != ' ' && number.charAt(i) != '-')
                numArr[ind++] = number.charAt(i);
        }
        StringBuilder sb = new StringBuilder();
        int rem = len%3; 
        if(rem == 0)
        {
            for(int i = 0; i < len; i++)
            {
                if(i != 0 && i%3 == 0)
                {
                    sb.append('-');
                }
                sb.append(numArr[i]);
            }
        }
        else if(rem == 1)
        {
            for(int i = 0; i < len-4; i++)
            {
                if(i != 0 && i%3 == 0)
                {
                    sb.append('-');
                }
                sb.append(numArr[i]);
            }
            int j = 0; 
            if(len > 4)
                sb.append('-');
            for(int i = len-4; i < len; i++)
            {
                if(j != 0 && j%2 == 0)
                {
                    sb.append('-');
                }
                sb.append(numArr[i]);
                j++;
            }
        }
        else if(rem == 2)
        {
            for(int i = 0; i < len-2; i++)
            {
                if(i != 0 && i%3 == 0)
                {
                    sb.append('-');
                }
                sb.append(numArr[i]);
            }
            int j = 0; 
            for(int i = len-2; i < len; i++)
            {
                if(j == 0)
                {
                    sb.append('-');
                }
                sb.append(numArr[i]);
                j++;
            }
        }
        return sb.toString();
    }
}
