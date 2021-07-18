//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
list<int> oddEven(list<int> g)
{
    list<int> :: iterator it1;
    list<int> even, odd;
    for(it1 = g.begin(); it1 != g.end(); it1++)
    {
        int x = (*it1);
        if(x % 2 == 0)
        {
            even.push_back(x);
        }
        else
        {
            odd.push_back(x);
        }
    }
    list<int> res;
    for(it1 = even.begin(); it1 != even.end(); it1++)
    {
        res.push_back(*it1);
    }
    for(it1 = odd.begin(); it1 != odd.end(); it1++)
    {
        res.push_back(*it1);
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int i;
        list<int> g;
        for(i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            g.push_back(x);
        }
        list<int> res = oddEven(g);
        
        list<int> :: iterator it;
        for(it = res.begin(); it != res.end(); it++)
        cout << *it << " ";
        cout << endl;
    }
}
