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
        int x, y, k, n;
        cin >> x >> y >> k >> n;
        vector<int> p,c;
        int i;
        for(i = 0; i < n; i++)
        {
            int pi,ci;
            cin >> pi >> ci;
            p.push_back(pi);
            c.push_back(ci);
        }
        int flag = 0;
        for(i = 0; i < n; i++)
        {
            if(p[i] >= x-y && c[i] <= k)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        cout << "LuckyChef" << endl;
        else
        cout << "UnluckyChef" << endl;
    }
}
