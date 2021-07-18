#include<bits/stdc++.h>
using namespace std;
vector<int> stockSpan(vector<int> v) {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    //we just need to
    //find the next greater element on the left 
    vector<int> res(v.size());
    stack<int> s;
    for(int i = v.size()-1; i >= 0; i--)
    {
        while(!s.empty() && v[s.top()] < v[i])
        {
            res[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty())
    {
        res[s.top()] = -1;
        s.pop();
    }
    vector<int> result(v.size());
    for(int i = 0; i < res.size(); i++)
    {
        result[i] = i - res[i];
    }
    return result;
}
