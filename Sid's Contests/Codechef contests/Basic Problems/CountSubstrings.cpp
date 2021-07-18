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
        long long int n;
        string s;
        cin >> n >> s;
        long long int freq = 0;
        long long int i = 0;
        for(i = 0; i < n; i++)
        {
            if(s[i] == '1')
            freq++;
        }
        long long int res;
        res = (freq) + ((freq*(freq-1))/2);
        cout << res << endl;
    }
}
