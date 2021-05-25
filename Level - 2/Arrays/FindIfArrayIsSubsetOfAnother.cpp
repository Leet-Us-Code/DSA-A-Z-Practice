//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
bool search(int a[], int x, int n)
{
    int l = 0;
    int r = n - 1;
    while(r >= l)
    {
        int mid = (l + r)/2;
        if(a[mid] == x)
        {
            return true;
        }
        else if(a[mid] > x)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int a[100000], b[100000];
        for(int i = 0; i < n; i++)
        cin >> a[i];
        sort(a, a+n);
        for(int i = 0; i < m; i++)
        cin >> b[i];
        int flag = 0;
        for(int i = 0; i < m; i++)
        {
            int x = b[i];
            bool res = search(a, x, n);
            if(res == false)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        cout << "No" << endl;
        else
        cout << "Yes" << endl;
    }
}
