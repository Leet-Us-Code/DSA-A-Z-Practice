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
        int m, x, y;
        cin >> m >> x >> y;
        vector<int> a;
        int i;
        for(i = 0; i < m; i++)
        {
            int r;
            cin >> r;
            a.push_back(r);
        }
        sort(a.begin(),a.end());
        vector<pair<int, int>> p;
        p.push_back(make_pair(0,0));
        for(i = 0; i < a.size(); i++)
        {
            int lower, higher;
            lower = a[i] - x*y;
            higher = a[i] + x*y;
            if(lower <= 0)
            lower = 1;
            if(higher > 100)
            higher = 100;
            p.push_back(make_pair(lower,higher));
        }
        p.push_back(make_pair(101,101));
        int sum = 0;
        for(i = 1; i < p.size(); i++)
        {
            if(p[i-1].second < p[i].first)
            sum = sum + (p[i].first - p[i-1].second) - 1;
        }
        cout << sum << endl;
    }
}
