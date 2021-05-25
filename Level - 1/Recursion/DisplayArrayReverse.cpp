//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
void displayArray(vector<int> a, int i)
{
    
    if(i == -1) 
    return;
    else
    {
        cout << a[i] << " ";
        displayArray(a,i-1);
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        int i;
        for(i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        displayArray(a,n-1);
        cout << endl;
    }
}
