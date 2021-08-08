#include<bits/stdc++.h>
int getLengthofLongestSubstring(int k, string s)
{
   // Write your code here.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int freq[26] = {0};
    int r = 0, l = 0;
    int dist = 0;
    int maxLen = 1;
    for(; r < s.length(); r++)
    {
        freq[s[r] - 'a']++;
        if(freq[s[r] - 'a'] == 1)
            dist++;
        while(l < r && dist > k)
        {
            freq[s[l] - 'a']--;
            if(freq[s[l] - 'a'] == 0)
                dist--;
            l++;
        }
        if(dist == k)
            maxLen = max(maxLen, r-l+1);
    }
    return maxLen;
}
