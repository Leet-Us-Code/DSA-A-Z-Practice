#include<bits/stdc++.h>
using namespace std;
//OM GAN GANAPTHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
int justSmaller(vector<int> a, int tar)
{
    int l = 0, r = a.size() - 1;
    int ans = -1;
    while(r >= l)
    {
        int mid = (r + l)/2;
        if(a[mid] <= tar)
        {
            ans = mid; 
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}
int justGreater(vector<int> a, int tar)
{
    int l = 0, r = a.size() - 1;
    int ans = -1;
    while(r >= l)
    {
        int mid = (r + l)/2;
        if(a[mid] >= tar)
        {
            ans = mid;
            r = mid - 1;
        }
        else 
        {
            l = mid + 1;
        }
    }
    return ans;
}
pair<int,int> minDifference(vector<int> a,vector<int> b){
    //Complete this method
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int dif = INT_MAX;
    pair<int, int> res;
    for(int i = 0; i < a.size(); i++)
    {
        int tar = a[i];
        int small = justSmaller(b, tar);
        int large = justGreater(b, tar);
        if(small == -1 && large == -1)
        continue;
        else if(small == -1)
        {
            if(dif > b[large] - tar)
            {
                res.first = tar;
                res.second = b[large];
                dif = b[large] - tar;
            }
        }
        else if(large == -1)
        {
            if(dif > tar - b[small])
            {
                res.first = b[small];
                res.second = tar;
                dif = tar - b[small];
            }
        }
        else 
        {
            if(dif > b[large] - tar)
            {
                res.first = tar;
                res.second = b[large];
                dif = b[large] - tar;
            }
            if(dif > tar - b[small])
            {
                res.first = b[small];
                res.second = tar;
                dif = tar - b[small];
            }
        }
    }
    return res;
    
}
