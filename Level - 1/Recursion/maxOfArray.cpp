//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int max(int x, int y)
{
    if(x > y)
    return x;
    else
    return y;
}
int maxOfArray(vector<int> a, int i)
{
    if(i == a.size()-1)
    {
        return a[i];
    }
    else
    {
        return max(a[i],maxOfArray(a,i+1));
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        int i, x;
        for(i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        int res;
        res = maxOfArray(a,0);
        cout << res << endl;
    }
}
