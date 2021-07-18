#include<vector>
#include<bits/stdc++.h>

using namespace std;


int countActivites(vector<pair<int,int> > a){
    //Complete this method
    
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    sort(a.begin(), a.end());
    int i = 0, j = 0, k = 0; 
    int cntr = 0;
    while(i < a.size() && j < a.size())
    {
        //i is the moving pointer and j is the conditional moving pointer
        a[k].first = a[j].first;
        a[k].second = a[j].second;
        while(a[i].first < a[k].second)
        {
            a[k].first = max(a[k].first, a[i].first);
            a[k].second = min(a[k].second, a[i].second);
            i++;
        }
        j = i;
        k++;
    }
    return k;
    
}
