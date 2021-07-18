#include<string>
#include<bits/stdc++.h>
using namespace std;

string smallestWindow(string str){
    //Complete this method
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int fp[256] = {0}, fs[256] = {0};
    int unique = 0;
    for(int i = 0; i < str.length(); i++)
    {
        fp[str[i]] = 1;
    }
    for(int i = 0; i < 256; i++)
    {
        if(fp[i] != 0)
        unique++;
    }
    int start = 0, startInd = -1, minLen = INT_MAX;
    int cntr = 0; // number of matched unique characters 
    for(int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if(fs[ch] == 0)
        {
            cntr++;
        }
        fs[ch]++;
        
        if(cntr == unique)
        {
            while(fs[str[start]] > 1)
            {
                fs[str[start]]--;
                start++;
            }
            int windowLen = i - start + 1;
            if(windowLen < minLen)
            {
                minLen = windowLen;
                startInd = start;
            }
        }
    }
    if(startInd == -1)
        return "";
    return str.substr(startInd, minLen);
    
}
