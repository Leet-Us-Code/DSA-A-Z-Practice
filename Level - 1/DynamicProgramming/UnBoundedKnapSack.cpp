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
    int wt[100000], val[100000];
    int i;
    for(int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    for(int i = 0; i < n ; i++)
    {
        cin >> wt[i];
    }
    int cap;
    cin >> cap;
    int dp[cap + 1] = {0};
    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j < cap + 1; j++)
        {
            //if the coin is not getting added 
            int val1 = dp[j];
            //if the coin is getting added 
            int val2 = 0;
            if(j >= wt[i])
            {
                val2 = val[i] + dp[j - wt[i]];
            }
            dp[j] = max(val1, val2);
        }
    }
    cout << dp[cap] << endl;
}
