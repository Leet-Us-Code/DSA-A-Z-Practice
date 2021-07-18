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
    //first row will be same for both dp and arr 
    for(int i = 0; i < k; i++)
    {
        dp[0][i] = arr[0][i];
    }
    //find the first minimum and second minimum 
    int first = INT_MAX, firstInd = -1;
    int second = INT_MAX, secondInd = -1;
    //ffirst and second minimum in the first row 
    for(int i = 0; i < k; i++)
    {
        if(first > dp[0][i])
        {
            first = dp[0][i];
            firstInd = i;
        }
    }
    //second minimum 
    for(int j = 0; j < k; j++)
    {
        if(j != firstInd && dp[0][j] < second)
        {
            second = dp[0][j];
            secondInd = j;
        }
    }
    //for the remaining 
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            int cur = arr[i][j];
            int min;
            if(j != firstInd)
            {
                min = dp[i-1][firstInd];
            }
            else if(j == firstInd)
            {
                min = dp[i-1][secondInd];
            }
            dp[i][j] = cur + min;
        }
        first = INT_MAX, second = INT_MAX, firstInd = -1, secondInd = -1;
        for(int l = 0; l < k; l++)
        {
            if(first > dp[i][l])
            {
                first = dp[i][l];
                firstInd = l;
            }
        }
        //second minimum 
        for(int l = 0; l < k; l++)
        {
            if(l != firstInd && dp[i][l] < second)
            {
                second = dp[i][l];
                secondInd = l;
            }
        }
    }
    int res = INT_MAX;
    for(int i = 0; i < k;  i++)
    {
        if(res > dp[n-1][i])
        res = dp[n-1][i];
    }
    cout << res << endl;
}
