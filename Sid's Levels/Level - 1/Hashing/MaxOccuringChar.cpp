//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        map<char,int> freq;
        for(int i = 0; i < s.length(); i++)
        {
            freq[s[i]]++;
        }
        int max = 0;
        char maxChar;
        for(auto it = freq.begin(); it != freq.end(); it++)
        {
            if(max < it->second)
            {
                max = it->second;
                maxChar = it->first;
            }
        }
        cout << maxChar << endl;
        freq.clear();
    }
}
