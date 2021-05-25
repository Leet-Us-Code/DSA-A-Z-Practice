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
        long long int p, a, b, c;
        cin >> p >> a >> b >> c;
        long long int x, y, z;
        if(p % a == 0)
        {
            x = 0;
        }
        else
        {
            x = a*((p/a) + 1) - p;
        }
        if(p %b == 0)
        {
            y = 0;
        }
        else
        {
            y = b*((p/b) + 1) - p;
        }
        if(p % c == 0)
        {
            z = 0;
        }
        else
        {
            z = c*((p/c) + 1) - p;
        }
        long long int res = min(x, min(y,z));
        cout << res << endl;
    }
}
