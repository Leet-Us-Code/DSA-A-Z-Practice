//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
vector<long long int> convertToBinary(long long int x)
{
    vector<long long int> res;
    while(x != 0)
    {
        res.push_back(x%2);
        x = x/2;
    }
    reverse(res.begin(), res.end());
    return res;
}
void displayVector(vector<long long int> v)
{
    for(long long int i = 0; i < v.size(); i++)
    {
        cout << v[i] <<  " "; 
    }
}
long long int binaryToNormal(long long int a[], long long int n)
{
    long long int res = 0;
    for(long long int i = 0; i < n; i++)
    {
        res += a[i]*pow(2, n-1-i);
    }
    return res;
}
int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        long long int c;
        cin >> c;
        vector<long long int> c1 = convertToBinary(c);
        long long int a[1000000], b[1000000];
        a[0] = 1;
        b[0] = 0;
        for(long long int i = 1; i < c1.size(); i++)
        {
            if(c1[i] == 0)
            {
                a[i] = 1;
                b[i] = 1;
            }
            else 
            {
                a[i] = 0;
                b[i] = 1;
            }
        }
        // for(long long int i = 0; i < c1.size(); i++)
        // cout << a[i] << " ";
        // cout << endl;
        // for(long long int i = 0;  i < c1.size(); i++)
        // cout << b[i] << " ";
        // cout << endl;
        long long int first = binaryToNormal(a, c1.size());
        long long int second = binaryToNormal(b, c1.size());
        cout << first*second << endl;
    }
}
