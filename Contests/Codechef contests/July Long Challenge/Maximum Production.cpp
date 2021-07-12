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
        int d, x, y, z;
        cin >> d >> x >> y >> z;
        int work1 = 7*x;
        int work2 = y*d + (7-d)*z;
        cout << max(work2, work1) << endl;
    }
}
