//OM GAN GANAPATHHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int denominations[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int v;
    cin >> v;
    vector<int> result;
    sort(denominations, denominations+8);
    reverse(denominations, denominations+8);
    for(int i = 0; i < 8; i++)
    {
        while(v >= denominations[i])
        {
            v = v - denominations[i];
            result.push_back(denominations[i]);
        }
    }
    for(int i = 0; i < result.size(); i++)
    cout << result[i] << " ";
    cout << endl;
}
