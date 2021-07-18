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
    int maxprev[100000];//stores the maximum profit till now .i.e if we are selling at the current point
    int maxProf = INT_MIN; // maxprofit till now encountered  
    int minPrice = INT_MAX;//minimum proce encounterd till now this will be where we buy the stock 
    for(int i = 0; i < n; i++)
    {
        if(minPrice > a[i])
        minPrice  = a[i];
        int curProfit = a[i] - minPrice;
        //update the maximum profit till now 
        if(maxProf < curProfit)
        {
            maxProf  = curProfit;
        }
        maxprev[i] = maxProf;
    }
    // for(int i = 0; i < n; i++)
    // cout << maxprev[i] << " ";
    int maxFrom[100000]; // stores the maximum profit from the current point if we are buying at the current point 
    int maxProfRev = INT_MIN;
    int maxPrice = INT_MIN; //maximum price in the future 
    for(int i = n-1; i >= 0; i--)
    {
        if(maxPrice < a[i])
        maxPrice = a[i];
        int curProfit = maxPrice - a[i];
        //update the maximum profit till now 
        if(maxProfRev < curProfit)
        {
            maxProfRev = curProfit;
        }
        maxFrom[i] = maxProfRev;
    }
    // for(int i = 0; i < n; i++)
    // {
    //     cout << maxFrom[i] << " ";
    // }
    int max = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if(maxFrom[i] + maxprev[i] > max)
        max = maxFrom[i] + maxprev[i];
    }
    cout << max << endl;
}
