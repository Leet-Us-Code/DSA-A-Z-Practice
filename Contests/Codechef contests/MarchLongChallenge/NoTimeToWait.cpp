//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, x;
    cin >> n >> h >> x;
    vector<int> a;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        a.push_back(num);
    }
    bool flag = false;
    for(int i = 0; i < n; i++)
    {
        if(a[i] + x >= h)
        {
            flag = true;
            break;
        }
    }
    if(flag == true)
    cout << "YES" << endl;
    else 
    cout << "NO" << endl;
}
