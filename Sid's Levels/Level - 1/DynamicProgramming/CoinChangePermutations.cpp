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
    int deno[n];
    for(int i = 0; i < n; i++)
    {
        cin >> deno[i];
    }
    int amt;
    cin >> amt;
    int dp[amt + 1] = {0};
    dp[0] = 1;
    for(int i = 1; i < amt + 1; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(deno[j] <= i)
            {
                dp[i] = dp[i] + dp[i-deno[j]];
            }
        }
    }
    cout << dp[amt] << endl;
}
