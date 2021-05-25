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
        long long int k;
        cin >> k;
        long long int i;
        vector<long long int> x;
        for(i = 0; i < n; i++)
        {
            long long int m;
            cin >> m;
            x.push_back(m);
        }
        int c = 0;
        for(i = 0; i < x.size(); i++)
        {
            if((x[i] + k)%7 == 0)
            c++;
        }
        cout << c << endl;
    }
}
