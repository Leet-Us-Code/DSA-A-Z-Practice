
class Solution{
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    public static int min(int x, int y)
    {
        if(x > y)
        return y;
        return x;
    }
    public String LargestEven(String S){
        int range = 10;
        int[] freq = new int[range];
        for(int i = 0; i < range; i++)
        freq[i] = 0; 
        for(int i = 0; i < S.length(); i++)
        {
            int x = S.charAt(i) - '0';
            freq[x]++;
        }
        int smallestEven = 1000000;
        for(int i = 0; i < range; i++)
        {
            if(i%2 == 0 && freq[i] != 0)
            {
                smallestEven = min(smallestEven, i);
            }
        }
        StringBuilder sb = new StringBuilder();
        // System.out.println(smallestEven);
        if(smallestEven != 1000000)
        {
            freq[smallestEven]--;
            for(int i = range-1; i >= 0; i--)
            {
                while(freq[i] > 0)
                {
                    char ch = (char)(i + '0');
                    sb.append(ch);
                    freq[i]--;
                }
            }
            sb.append(smallestEven);
        }
        else 
        {
            for(int i = range-1; i >= 0; i--)
            {
                while(freq[i] > 0)
                {
                    char ch = (char)(i + '0');
                    sb.append(ch);
                    freq[i]--;
                }
            }
        }
        return sb.toString();
    }
}
