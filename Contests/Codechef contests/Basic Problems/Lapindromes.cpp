//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        long long int i;
        long long int freq1[26] = {0}, freq2[26] = {0};
        long long int n;
        n = s.length();
        if(n % 2 == 0)
        {
            for(i = 0; i <= (n/2)-1; i++)
            freq1[s[i]-'a']++;
            for(i = (n/2); i < n; i++)
            freq2[s[i]-'a']++;
        }
        else 
        {
            for(i = 0; i <= (n/2)-1; i++)
            freq1[s[i]-'a']++;
            for(i = (n/2)+1; i < n; i++)
            freq2[s[i]-'a']++;
        }
        int flag = 0;
        for(i = 0; i < 26; i++)
        {
            if(freq1[i] != freq2[i])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        cout << "NO" << endl;
        else
        cout << "YES" << endl;
    }
}
