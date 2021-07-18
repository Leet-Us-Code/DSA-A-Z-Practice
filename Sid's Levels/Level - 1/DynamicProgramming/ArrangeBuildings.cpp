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
    int dp1[n + 1] ;
    int dp0[n + 1] ;
    dp1[0] = 0;
    dp0[0] = 0;
    dp1[1] = 1;
    dp0[1] = 1;
    for(int i = 2; i  < n + 1; i++)
    {
        dp1[i] = dp1[i-1] + dp0[i-1];
        dp0[i] = dp1[i-1];
    }
    int total  = dp0[n] + dp1[n];
    cout << total*total << endl;
}
