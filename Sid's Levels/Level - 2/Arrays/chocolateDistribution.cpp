//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[100000];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int m;
        cin >> m;
        int minDif = INT_MAX;
        sort(arr, arr+n);
        int p1 = 0;
        int p2 = m-1;
        while(p1 < n && p2 < n)
        {
            minDif = min(minDif, arr[p2] - arr[p1]);
            p1++;
            p2++;
        }
        cout  << minDif << endl;
    }
}
