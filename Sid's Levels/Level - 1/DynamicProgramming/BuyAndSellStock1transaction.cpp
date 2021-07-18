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
    cin >> a[i];
    int min[100000];
    int mini = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        if(a[i] < mini)
        mini = a[i];
        min[i] = mini;
    }
    int max = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if(a[i] - min[i] > max)
        max = a[i] - min[i];
    }
    cout << max << endl;
}
