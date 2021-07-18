//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
//tabulation approach  in DP 
int countPaths(int n)
{
    int dp[n+1];
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3; i <= n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    return dp[n];
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int res;
        res = countPaths(n);
        cout << res << " ";
        cout << endl;
    }
}
