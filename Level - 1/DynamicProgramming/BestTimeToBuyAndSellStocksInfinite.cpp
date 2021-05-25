//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[100000];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] <= a[i+1])
        {
            int start = a[i];
            while(i < n-1 && a[i] <= a[i+1])
            {
                i++;
            }
            int end = a[i];
            sum += (end - start);
        }
    }
    cout << sum << endl;
}
