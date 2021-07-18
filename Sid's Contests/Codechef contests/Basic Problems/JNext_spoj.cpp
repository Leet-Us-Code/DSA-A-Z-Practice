//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
void swap(long long int &a, long long int &b)
{
    long long int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int a[1000000], i;
        for(i = 0; i < n; i++)
        cin >> a[i];
        long long int breakPoint = -1;
        for(i = n-1; i > 0; i--)
        {
            if(a[i-1] < a[i])
            {
                breakPoint = i-1;
                break;
            }
        }
        if(breakPoint == -1)
        cout << -1 << endl;
        else
        {
            long long int smallestInd = i,j;
            for(j = breakPoint+1; j < n; j++)
            {
                if(a[j] > a[breakPoint] && a[j] < a[smallestInd])
                smallestInd = j;
            }
            swap(a[breakPoint],a[smallestInd]);
            sort(a+breakPoint+1, a+n);
            for(i = 0; i < n; i++)
            cout << a[i] ;
            cout << endl;
        }
    }
} 
