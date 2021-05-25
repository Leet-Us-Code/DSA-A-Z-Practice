//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BAHDRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int dp[3][n];
    dp[0][0] = 0;
    dp[1][0] = 0;
    dp[2][0] = 0;
    dp[0][1] = k;
    dp[1][1] = k*(k-1);
    dp[2][1] = dp[0][1] + dp[1][1];
    for(int j = 2; j < n; j++)
    {
        dp[0][j] = dp[1][j-1];
        dp[1][j] = (k-1)*dp[2][j-1];
        dp[2][j] = dp[0][j] + dp[1][j];
    }
    cout << dp[2][n-1] << endl;
}
