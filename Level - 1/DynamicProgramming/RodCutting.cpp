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
        int n;
        cin >> n;
        int a[100000];
        for(int i = 0; i < n; i++)
        cin >> a[i];
        int dp[n+1] = {0};
        for(int i = 0; i < n; i++)
        {
            for(int j = 1; j < n+1; j++)
            {
                //if not included 
                int l = dp[j];
                //if included
                int r = 0;
                if(j >= (i+1))
                r = a[i] + dp[j - (i+1)];
                dp[j] = max(l,r);
            }
        }
        cout << dp[n] << endl;
    }
}
