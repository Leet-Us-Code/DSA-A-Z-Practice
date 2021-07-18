//OM GAN GANAPATHAYE NAMO NAMAH
//JAI SHRI RAM
//JAI BAJRANGBALI
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[100000],i;
        for(i = 0; i<n; i++)
        cin>>a[i];
        unordered_map<long long int,long long int>freq;
        for(i = 0; i<n; i++)
        freq[a[i]]++;
        long long int flag = 0;
        for(i = 0; i<n; i++)
        {
            if(freq[a[i]] == 1)
            {
                flag = a[i];
                break;
            }
        }
        cout<<flag<<endl;
    }
}
