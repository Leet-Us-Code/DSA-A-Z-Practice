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
    int jumps[100];
    for(int i = 0; i < n; i++)
    cin >> jumps[i];
    int dp[n+1] = {-1};
    dp[n] = 0;
    for(int i = n-1; i >= 0; i--)
    {
        int minimum = INT_MAX;
        if(jumps[i] > 0)
        {
            for(int j = 1; j <= jumps[i] && i+j < n+1; j++)
            {
                if(dp[i+j] != -1)
                minimum = min(minimum,dp[i+j]);
            }
            if(minimum != INT_MAX)
            {
                dp[i] = minimum+1;
            }
            else
            {
                dp[i] = -1;
            }
        }
        
    }
    cout << dp[0] <<  "";
}
