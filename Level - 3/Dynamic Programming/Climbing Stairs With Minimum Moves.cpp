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
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> dp(n+1);
    dp[n] = 0;
    for(int i = n-1; i >= 0; i--)
    {
        dp[i] = INT_MAX;
        for(int j = 1; j <= a[i]; j++)
        {
            if(j+i <= n && dp[i+j] != INT_MAX)
            {
                dp[i] = min(dp[i], dp[i+j] + 1);
            }
        }
    }
    cout << dp[0] << endl;
}
