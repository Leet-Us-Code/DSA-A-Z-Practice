//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int knapSack(int n, int W, int wt[], int val[])
{
    if(n == 0 || W == 0)
    return 0;
    if(wt[n-1] > W)
    knapSack(n-1,W,wt,val);
    else
    {
        int x, y;
        x = knapSack(n-1,W,wt,val);
        y = val[n-1] + knapSack(n-1, W-wt[n-1], wt, val);
        return max(x,y);
    }
}
int main()
{
    int n, wt[1000], val[1000], i, W;
    cin >> n;
    cin >> W;
    for(i = 0; i < n; i++)
    cin >> wt[i];
    for(i = 0; i < n; i++)
    cin >> val[i];
    int maxVal;
    maxVal = knapSack(n,W,wt,val);
    cout << maxVal << endl;
}
