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
    int jumps[1000];
    for(int i = 0; i < n; i++)
    cin >> jumps[i];
    int dp[n+1] = {0};
    dp[n] = 1; // from last step to last step
    for(int i = n-1; i >= 0; i--)
    {
        for(int j = 1; j <= jumps[i] && i+j < n+1; j++)
        {
            dp[i] = dp[i] + dp[i+j];
        }
    }
    cout << dp[0];
}
