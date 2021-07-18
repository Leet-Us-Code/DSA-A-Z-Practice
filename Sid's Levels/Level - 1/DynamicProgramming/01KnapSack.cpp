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
    int arr[100000], val[100000];
    for(int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    int dp[1000][1000];
    for(int i = 0; i < n+1; i++)
    {
        for(int j = 0; j < m+1; j++)
        {
            dp[i][j] = 0;
        }
    }
    for(int i = 1; i < n+1; i++)
    {
        for(int j = 1; j < m+1; j++)
        {
            int c1 = dp[i-1][j];
            int c2 = 0;
            if(j >= arr[i-1])
            {
                c2 = val[i-1] + (dp[i-1][j - arr[i-1]]);
            }
            dp[i][j] = max(c1,c2);
        }
    }
    cout << dp[n][m];
}
