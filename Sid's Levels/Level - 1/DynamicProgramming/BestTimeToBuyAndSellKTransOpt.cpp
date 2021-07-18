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
    int k;
    cin >> k;
    int dp[k+1][n];
    for(int i = 0; i < k+1; i++)
    {
        for(int j = 0; j < n; j++)
        dp[i][j] = 0;
    }
    for(int i = 1; i < k+1; i++)
    {
        int maxim = INT_MIN;
        for(int j = 1; j < n; j++)
        {
            maxim = max(dp[i-1][j-1] - a[j-1], maxim);
            dp[i][j] = max(dp[i][j-1], maxim + a[j]);
        }
    }
    cout << dp[k][n-1] << endl;
}
