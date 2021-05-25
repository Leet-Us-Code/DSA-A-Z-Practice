//OM GAN GANAPATHAYE NAMO NAMAH
//JAI SHRI RAM 
//JAI BAJRANGBALI
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
void printDecInc(int n)
{
    if(n == 0)
    return;
    else
    {
        cout << n << " ";
        printDecInc(n-1);
        cout << n << " ";
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
        printDecInc(n);
        cout << endl;
    }
}
