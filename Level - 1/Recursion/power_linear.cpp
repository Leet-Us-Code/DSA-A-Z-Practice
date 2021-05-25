//OM GAN GANAPATHAYE NAMO NAMAH
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int power(int n, int x)
{
    if(x == 0)
    return 1;
    else
    return n*power(n,x-1);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int x;
        cin >> x;
        int res;
        res = power(x,n);
        cout << res << endl;
    }
}
