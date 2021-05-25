//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int maxProfit(int dp[][1000], int price[], int s, int e, int y)
{
    if(dp[s][e] != -1)
    return dp[s][e];
    if(s == e)
    return y*price[s];
    int l = y*price[s] + maxProfit(dp, price, s+1, e, y+1);
    int r = y*price[e] + maxProfit(dp, price, s, e-1, y+1);
    dp[s][e] = max(l,r);
    return max(l,r);
}
int main()
{
    int n;
    cin >> n;
    int dp[n][1000];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        dp[i][j] = -1;
    }
    int price[n];
    for(int i = 0; i < n; i++)
    cin >> price[i];
    int ans = maxProfit(dp, price, 0, n-1, 1);
    cout << ans << endl;
}
