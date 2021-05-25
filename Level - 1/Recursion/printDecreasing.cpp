//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
void printDecreasing(int n)
{
    if(n == 0)
    return;
    else
    {
        cout << n << " ";
        printDecreasing(n-1);
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
        printDecreasing(n);
        cout << endl;
    }
}
