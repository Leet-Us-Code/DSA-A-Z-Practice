//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA,, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[100000];
    for(int i = 0; i < n; i++)
    cin >> a[i];
    int fee;
    cin >> fee;
    int ssp = 0;
    int bsp = -a[0];
    for(int i = 1; i < n; i++)
    {
        int newssp, newbsp;
        if(ssp - a[i] > bsp)
        {
            newbsp = ssp - a[i];
        }
        else 
        {
            newbsp = bsp;
        }
        if(a[i] + bsp - fee > ssp)
        {
            newssp = a[i] + bsp - fee;
        }
        else 
        {
            newssp = ssp;
        }
        ssp = newssp;
        bsp = newbsp;
    }
    cout << ssp << endl;
}
