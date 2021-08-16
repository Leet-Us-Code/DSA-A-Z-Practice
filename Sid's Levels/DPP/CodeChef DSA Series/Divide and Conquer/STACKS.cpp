//TLE -> with vectors (dont know y)
//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int justGreater(int nums[], int n, int tar)
{
    int l = 0, r = n - 1;
    int ans = -1;
    while(l <= r)
    {
        int mid = (l + r)/2;
        if(nums[mid] > tar)
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
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int disk[n], top[n];
        int k = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> disk[i];
        }
        top[k] = disk[0];
        k++;
        for(int i = 1; i < n; i++)
        {
            int ind = justGreater(top, k, disk[i]);
            if(ind == -1)
            {
                top[k] = disk[i];
                k++;
            }
            else 
            {
                top[ind] = disk[i];
            }
        }
        cout << k << " ";
        for(int i = 0; i < k; i++)
        {
            cout << top[i] << " ";
        }
        cout << endl;
    }
}
