//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        vector<int> a;
        int i;
        for(i = 0; i < n; i++)
        {
            int x;;
            cin >> x;
            a.push_back(x);
        }
        int sum = 0;
        for(i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        if(sum > k)
        cout << "No" <<endl;
        else
        cout << "Yes" <<endl;
    }
}
