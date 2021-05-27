int longestSubstrDitinctChars(string s)
{
    // your code here
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int i = 0; 
    int j = 0;
    int count[26] = {0};
    int max = 1;
    while(i < s.length() && j < s.length())
    {
        if(count[s[j] - 'a'] == 0)
        {
            if(max < j-i+1)
            max = j-i+1;
            count[s[j] - 'a']++;
            j++;
        }
        else
        {
            count[s[i]-'a']--;
            i++;
        }
    }
    return max;
}
