//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(a == 0)
    return b;
    return gcd(b%a, a);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l, b;
        cin >> l >> b;
        int res = gcd(l, b);
        cout << res << endl;
    }
}
