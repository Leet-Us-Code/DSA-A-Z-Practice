//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
vector<string> findAll(int n, int m)
{
    if(n == 1 && m != 1)
    {
        string s;
        vector<string> a;
        for(int i = 0; i < m-1; i++)
        s.push_back('H');
        a.push_back(s);
        return a;
    }
    if(n != 1 && m == 1)
    {
        string s;
        vector<string> a;
        for(int i = 0; i < n-1; i++)
        {
            s.push_back('V');
        }
        a.push_back(s);
        return a;
    }
    vector<string> v1, v2, a;
    v1 = findAll(n,m-1);
    v2 = findAll(n-1,m);
    for(int i = 0; i < v1.size(); i++)
    {
        v1[i].push_back('H');
        a.push_back(v1[i]);
    }
    for(int i = 0; i < v2.size(); i++)
    {
        v2[i].push_back('V');
        a.push_back(v2[i]);
    }
    return a;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        vector<string> res;
        res = findAll(n,m);
        for(int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
        cout << endl;
    }
}
