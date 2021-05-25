//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYNA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
    if(a > b)
    return a;
    else
    return b;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int dp[n][m] ;
    //copy the contents of the last column 
    for(int j = 0; j < n; j++)
    {
        dp[j][m-1] = arr[j][m-1];
    }
    //let's start the precomputation 
    for(int j = m-2; j >= 0; j--)
    {
        for(int i = n-1; i >=0; i--)
        {
            
            //for the last row 
            if(i == n-1)
            {
                dp[i][j] = max(dp[i-1][j+1],dp[i][j+1]) + arr[i][j];
            }
            else if(i == 0)
            {
                //for the first row 
                dp[i][j] = max(dp[i][j+1],dp[i+1][j+1]) + arr[i][j];
            }
            else
            {
                int max1 = max(dp[i][j+1],dp[i+1][j+1]);
                dp[i][j] = max(max1, dp[i-1][j+1]) + arr[i][j];
            }
        }
    }
    // for(int i = 0; i < n; i++)
    // {
    //     for(int j = 0; j < m; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    //find the maximum in the first row 
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if(dp[i][0] > maxi)
        maxi = dp[i][0];
    }
    cout << maxi << endl;
}
