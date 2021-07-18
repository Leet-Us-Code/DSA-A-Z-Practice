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
    int i;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int bsp = -a[0];
    int csp = 0;
    int ssp = 0;
    for(int i = 1; i < n; i++)
    {
        int nbsp, nssp, ncsp;
        if(csp - a[i] > bsp)
        {
            nbsp = csp - a[i];
        }
        else 
        {
            nbsp = bsp;
        }
        if(a[i] + bsp > ssp)
        {
            nssp = a[i] + bsp;
        }
        else
        {
            nssp = ssp;
        }
        if(ssp > csp)
        {
            ncsp = ssp;
        }
        else
        {
            ncsp = csp;
        }
        csp = ncsp;
        ssp = nssp;
        bsp = nbsp;
    }
    cout << ssp << endl;
}
