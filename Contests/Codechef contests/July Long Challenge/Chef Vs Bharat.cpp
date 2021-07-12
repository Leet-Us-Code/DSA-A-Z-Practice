//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
long long int mod = 1000000007;
long long int powerMod(long long int a, long long int b)
{
    int res = 1;
    a = a%mod;
    if (a == 0) 
    return 0; 
    while (b > 0)
    {
        if (b & 1)
        res = (res * a)%mod;
        b = b>>1; 
        a = (a * a)%mod;
    }
    return res;
}
void precomputeCheforas(vector<long long int> &a)
{
    long long int i;
    a[0] = 0;
    for(i = 1; i <= 100001; i++)
    {
        long long int num = i;
        long long int res = num/10;
        while(res != 0)
        {
            long long int rem = res%10;
            num = num*10 + rem;
            res = res/10;
        }
        a[i] = num;
    }
}
int main()
{
    vector<long long int> chefora(100001), prefix(100001);
    precomputeCheforas(chefora);
    prefix[0] = 0;
    long long int i;
    for(i = 0; i <= 100001; i++)
    {
        prefix[i] = chefora[i] + prefix[i-1];
    }
    long long int t;
    cin >> t;
    while(t--)
    {
        long long int l, r;
        cin >> l >> r;
        long long int a = chefora[l];
        long long int b = prefix[r] - prefix[l];
        long long int res = powerMod(a, b);
        cout << res << endl;
    }
}
