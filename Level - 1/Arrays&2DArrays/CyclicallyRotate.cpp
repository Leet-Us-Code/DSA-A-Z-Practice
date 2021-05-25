//OM GAN GANAPATHAYE NAMO NAMAH
//JAI SHRI RAM 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
//JAI BAJRANGBALI
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[100000];
        long long int i;
        for(i=0;i<n;i++)
        cin>>a[i];
        long long int b[100000];
        for(i=0;i<n;i++)
        b[(i+1)%n]=a[i];
        for(i=0;i<n;i++)
        cout<<b[i]<<" ";
        cout<<endl;
    }
}
