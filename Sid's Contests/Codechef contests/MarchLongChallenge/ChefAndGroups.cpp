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
        int n = s.length();
        int c1 = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                while(i < n-1 && s[i] == s[i+1])
                {
                    i++;
                }
                c1++;
            }
        }
        cout << c1 << endl;
    }
}
