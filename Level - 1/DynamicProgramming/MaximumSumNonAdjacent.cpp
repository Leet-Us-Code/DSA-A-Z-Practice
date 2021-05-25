//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[100000];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int inc[100000], exc[100000];
    inc[0] = a[0];
    exc[0] = 0;
    for(int i = 1; i < n; i++)
    {
        inc[i] = exc[i-1] + a[i];
        exc[i] = max(inc[i-1], exc[i-1]);
    }
    int res = max(inc[n-1], exc[n-1]);
    cout << res << endl;
}
