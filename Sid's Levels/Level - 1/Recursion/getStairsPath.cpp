//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
vector<string> findAll(int n)
{
    if(n == 1)
    {
        vector<string> a;
        a.push_back("1");
        return a;
    }
    if(n == 2)
    {
        vector<string> a;
        a.push_back("11");
        a.push_back("2");
        return a;
    }
    if(n == 3)
    {
        vector<string> a;
        a.push_back("111");
        a.push_back("12");
        a.push_back("21");
        a.push_back("3");
        return a;
    }
    vector<string> v1,v2,v3;
    v1 = findAll(n-1);
    v2 = findAll(n-2);
    v3 = findAll(n-3);
    vector<string> a;
    int i;
    for(i = 0; i < v1.size(); i++)
    {
        v1[i].push_back('1');
        a.push_back(v1[i]);
    }
    for(i = 0; i < v2.size(); i++)
    {
        v2[i].push_back('2');
        a.push_back(v2[i]);
    }
    for(i = 0; i < v3.size(); i++)
    {
        v3[i].push_back('3');
        a.push_back(v3[i]);
    }
    return a;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<string> res;
        res = findAll(n);
        int i;
        for(i = 0; i < res.size(); i++)
        cout << res[i] << " ";
        cout << endl;
    }
}
