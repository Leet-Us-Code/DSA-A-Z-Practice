class Solution {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LASKHMI NARAYANA, BHADRE NARAYANA
    public int compress(char[] chars) {
        int n = chars.length;
        int j = 0;
        for(int i = 0; i < n; i++)
        {
            int c = 1;
            chars[j++] = chars[i];
            while(i < n-1 && chars[i] == chars[i+1])
            {
                c++;
                i++;
            }
            if(c == 1)
                continue; 
            else 
            {
                Integer x = new Integer(c);
                String temp = x.toString();
                // System.out.println(temp);
                for(int ind = 0; ind < temp.length(); ind++)
                {
                    chars[j++] = temp.charAt(ind); 
                }
            }
        }
        return j;
    }
}
