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
        vector<int> a;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        vector<int> b;
        for(int i = 0; i < a.size(); i++)
        b.push_back(a[i]);
        sort(b.begin(), b.end());
        int flag  = 0;
        for(int i = 0; i < b.size(); i++)
        {
            if(a[i] != b[i])
            {
                flag = 1;
                break;
            }
        }
        sort(a.begin(), a.end());
        int sum = 0;
        for(int i = 0; i < a.size(); i++)
        {
            sum += abs(i+1 - a[i]);
            if(a[i] > i+1)
            {
                sum = 0;
                break;
            }
        }
        if(sum % 2 == 1)
        cout << "First" << endl;
        else
        cout << "Second" << endl;
    }
}
