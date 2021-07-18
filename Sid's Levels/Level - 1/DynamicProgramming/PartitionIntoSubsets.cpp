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
    int k;
    cin >> k;
    int a[k+1][n+1];
    //first row and column will be zeroes 
    for(int i = 0; i < k+1; i++)
    {
        a[i][0] = 0;
    }
    for(int i = 0; i < n+1; i++)
    {
        a[0][i] = 0;
    }
    //second row will be fully one other than it's first element 
    for(int i = 1; i < n+1; i++)
    {
        a[1][i] = 1;
    }
    for(int i = 1; i < k+1; i++)
    {
        for(int j = 1; j < n+1; j++)
        {
            if(i > j)
            a[i][j] = 0;
            else if(i == j)
            a[i][j] = 1;
            else
            a[i][j] = i*(a[i][j-1]) + a[i-1][j-1];
        }
    }
    cout << a[k][n] << endl;
}
