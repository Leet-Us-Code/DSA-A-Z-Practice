//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int i;
        vector<long long int> a;
        for(i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            a.push_back(x);
        }
        long long int sum = 0;
        sort(a.begin(),a.end());
        for(i = 0; i < n; i++)
        sum = sum + (a[i] - a[0]);
        cout << sum << endl;
    }
}
