//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n][k];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            cin >> arr[i][j];
        }
    }
    int dp[n][k];
    //the first row will anyway be same for dp and arr
    for(int i = 0; i < k; i++)
    {
        dp[0][i] = arr[0][i];
    }
    //remaining 
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            int cur = arr[i][j];
            int min = INT_MAX;
            //minimum in the previous row other than current index 
            for(int l = 0; l < k; l++)
            {
                if(l != j && dp[i-1][l] < min)
                {
                    min = dp[i-1][l];
                }
            }
            dp[i][j] = cur + min;
        }
    }
    int res = INT_MAX;
    //find the minimum in the last row 
    for(int i = 0; i < k; i++)
    {
        if(dp[n-1][i] < res)
        res = dp[n-1][i];
    }
    cout << res << endl;
}
