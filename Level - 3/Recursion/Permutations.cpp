#include<bits/stdc++.h>
using namespace std;

//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
void helper(string &s, int l, int r, set<string> &res)
{
    if(l == r)
    {
        res.insert(s);
        return;
    }
    for(int i = l; i <= r; i++)
    {
        swap(s[i], s[l]);
        helper(s, l+1, r, res);
        swap(s[i], s[l]);
    }
}
vector<string> findSortedPermutations(string s){
    //Your code goes here. Do not change the function or parameters. You can use helper functions if needed.
    set<string> res;
    int n = s.length();
    helper(s, 0, n-1, res);
    vector<string> st;
    for(string str : res)
    {
        st.push_back(str);
    }
    sort(st.begin(), st.end());
    return st;
}
