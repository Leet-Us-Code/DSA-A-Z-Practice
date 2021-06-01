#include<bits/stdc++.h>
using namespace std;
string findSubString(string str)
{
    // Your code goes here  
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    //OM NAMO NARAYANAYA
    int startInd = 0;
    int distinct = 0;
    int n = str.length();
    string s = str;
    int freq1[256] = {0};
    for(int i = 0; i < n; i++)
    {
        freq1[str[i]]++;
    }
    for(int i = 0; i < 256; i++)
    {
        if(freq1[i] != 0)
        distinct++;
    }
    int minLen = INT_MAX;
    int r = 0, l = 0;
    int freq[256] = {0};
    while(r < n && l < n)
    {
        freq[str[r]]++;
        int cntr = 0;
        for(int i = 0; i < 256; i++)
        {
            if(freq[i] != 0)
            cntr++;
        }
        if(cntr < distinct)
        r++;
        else 
        {
            startInd = l;
            minLen = min(minLen, r - l + 1);
            freq[str[l]]--;
            l++;
            freq[str[r]]--;
        }
    }
    return str.substr(startInd, minLen);
}
int main()
{
    string s;
    cin >> s;
    string res = findSubString(s);
    cout << res.length() << endl;
}
