//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
vector<string> findAll(int sr, int sc, int dr, int dc)
{
    if(sc == dc && sr == dr)
    {
        vector<string> a;
        a.push_back("");
        return a;
    }
    vector<string> a;
    //horizontal moves
    for(int i = 1; i <= dc-sc; i++)
    {
        vector<string> res = findAll(sr,sc+i,dr,dc);
        for(int j = 0; j < res.size(); j++)
        {
            string s1;
            s1 = to_string(i);
            string s2;
            s2 = "h" + s1 + res[i];
            a.push_back(s2);
        }
    }
    //vertical moves
    for(int i = 1; i <= dr-sr; i++)
    {
        vector<string> res = findAll(sr+i,sc,dr,dc);
        for(int j = 0; j < res.size(); j++)
        {
            string s1;
            s1 = to_string(i);
            string s2;
            s2 = "v" + s1 + res[i];
            a.push_back(s2);
        }
    }
    //diagonal moves
    for(int i = 1; i <= dr-sr && i <= dc-sc; i++)
    {
        vector<string> res = findAll(sr+i,sc+i,dr,dc);
        for(int j = 0; j < res.size(); i++)
        {
            string s1;
            s1 = to_string(i);
            string s2;
            s2 = "d" + s1 + res[i];
            a.push_back(s2);
        }
    }
    return a;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> res;
        res = findAll(1,1,n,m);
        for(int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
        cout << endl;
    }
}
