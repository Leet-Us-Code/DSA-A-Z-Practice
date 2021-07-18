//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
void towerOfHanoi(int n, char from, char aux, char to, int &c)
{
    if(n == 1)
    {
        cout << "move disk " << n << " from rod " << from << " to rod " << to << endl; 
        c++;
        return;
    }
    else
    {
        towerOfHanoi(n-1, from, to, aux, c);
        cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;
        c++;
        towerOfHanoi(n-1, aux, from, to, c);
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
        char a, b, c;
        a = '1';
        b = '2';
        c = '3';
        int x = 0;
        towerOfHanoi(n,a,b,c,x);
        cout << x << endl;
    }
}
