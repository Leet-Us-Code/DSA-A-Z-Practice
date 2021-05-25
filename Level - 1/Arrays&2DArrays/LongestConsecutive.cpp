//JAI SHRI RAM
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
//JAI BAJRANGBALI
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[100000],i;
        for(i = 0; i<n; i++)
        {
            cin>>a[i];
        }
        int len = 1;
        int maxLen = 0;
        sort(a,a+n);
        for(i = 0; i<n-1; i++)
        {
            while(a[i] == a[i+1])
            i++;
            if(a[i+1] - a[i] == 1)
            {
                len++;
            }
            else
            len = 1;
            if(len > maxLen)
            maxLen = len;
        }
        if(n > 1)
        cout<<maxLen<<endl;
        else
        cout<<1<<endl;
    }
}
