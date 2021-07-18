#include<vector>
#include<bits/stdc++.h>
using namespace std;
bool isOutOfOrder(vector<int> a, int i)
{
    int n = a.size();
    if(i == 0)
    {
        if(a[i] > a[i+1])
        return true;
    }
    else if(i == n-1)
    {
        if(a[i] < a[i-1])
        return true;
    }
    else if(a[i] > a[i+1] || a[i] < a[i-1])
        return true;
    return false;
    
}

pair<int,int> subarraySorting(vector<int> a){
    //Expected Optimal Complexity O(n) Time, O(1) Space
    //may be start with O(NLogN) and try to improve
    //complete this function
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int n = a.size();
    int first = INT_MAX, second = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if(isOutOfOrder(a, i))
        {
            first = min(first, a[i]);
            second = max(second, a[i]);
        }
    }
    //fiind the correct positiion of first 
    int left = 0;
    while(left < n)
    {
        if(a[left] > first)
        {
            break;
        }
        left++;
    }
    int right = n-1;
    while(right >= 0)
    {
        if(a[right] < second)
        {
            break;
        }
        right--;
    }
    if(first == INT_MAX && second == INT_MIN)
        return {-1,-1};
    else
        return {left, right};
}
