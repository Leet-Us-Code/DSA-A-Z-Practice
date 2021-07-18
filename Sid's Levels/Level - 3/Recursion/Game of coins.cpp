#include <bits/stdc++.h>
using namespace std;
//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
int helper(vector<int> v, int s, int e)
{
    if(s == e)
    {
        return v[s];
    }
    if(s > e)
        return 0;
    int opt1 = v[s] + min(helper(v, s+1, e-1), helper(v, s+2,e));
    int opt2 = v[e] + min(helper(v, s, e-2), helper(v, s+1, e-1));
    return max(opt1, opt2);
}
int MaxValue(int n, vector<int> v){
//Write your code here. Do not modify the function or parameters. You can use a helper function if needed.
    return helper(v, 0, n-1);
}
