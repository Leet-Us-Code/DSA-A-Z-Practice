//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    int r[100000], b[100000], g[100000];
    for (int i = 0; i < n; i++) {
        cin >> r[i] >> b[i] >> g[i];
    }
    int dp[3][n];
    dp[0][0] = r[0];
    dp[1][0] = b[0];
    dp[2][0] = g[0];
    for (int j = 1; j < n; j++) {
        dp[0][j] = r[j] + min(dp[1][j - 1], dp[2][j - 1]);

        dp[1][j] = b[j] + min(dp[0][j - 1], dp[2][j - 1]);

        dp[2][j] = g[j] + min(dp[1][j - 1], dp[0][j - 1]);

    }
    int res = min(dp[0][n-1], min(dp[1][n-1], dp[2][n-1]));
    cout << res << endl;
}
