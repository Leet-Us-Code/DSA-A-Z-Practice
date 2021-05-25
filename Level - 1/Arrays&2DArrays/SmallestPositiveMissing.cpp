#include<iostream>
#include<algorithm>
using namespace std;
long long int fun(long long int A[],long long int n) 
{ 
    bool present[n + 1] = { false }; 
    for (long long int i = 0; i < n; i++) { 
        if (A[i] > 0 && A[i] <= n) 
            present[A[i]] = true; 
    } 
    for (long long int i = 1; i <= n; i++) 
        if (!present[i]) 
            return i; 
    return n + 1; 
} 
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        long long int n,a[1000000],i;
        cin>>n;
        for(i=0;i<n;i++)
        cin>>a[i];
        long long int x;
        x=fun(a,n);
        cout<<x<<endl;
        t--;
    }
}
