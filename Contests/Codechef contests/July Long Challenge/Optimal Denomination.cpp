//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a, long long int b)
{
    if(b == 0)
    return a; 
    return gcd(b, a%b);
}
void precompute(vector<long long int> a, long long int forward[], long long int backward[])
{
    long long int n = a.size();
    forward[0] = 0;
    backward[n-1] = 0;
    long long int temp1 = a[0], temp2 = a[n-1];
    for(long long int i = 1; i < n; i++)
    {
        temp1 = gcd(temp1, a[i-1]);
        forward[i] = temp1;
    }
    for(long long int i = n-2; i >= 0; i--)
    {
        temp2 = gcd(temp2, a[i+1]);
        backward[i] = temp2;
    }
}
int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if(n == 1)
        cout << 1 << endl;
        else 
        {
            sort(a.begin(), a.end());
            long long int backward[n], forward[n];
            precompute(a, forward, backward);
            // for(int i = 0; i < n; i++)
            // cout << forward[i] << " ";
            // cout << endl;
            // for(int i = 0; i < n; i++)
            // cout << backward[i] << " ";
            // cout << endl;
            vector<long long int> gcda;
            for(long long int i = 0; i < n; i++)
            {
                long long int x = gcd(forward[i], backward[i]);
                gcda.push_back(x);
            }
            //substituting 
            long long int maxEle = INT_MIN, ind = -1;
            for(long long int i = 0; i < n; i++)
            {
                if(maxEle <= gcda[i])
                {
                    maxEle = gcda[i];
                    ind = i;
                }
            }
            /*
            3 1 2 
            1 1 1 
            
            1 2 3 
            1 1 1
            
            */
            long long int sub = gcda[ind];
            a[ind] = gcda[ind];
            // for(int i = 0; i < n; i++)
            // cout << gcda[i] << " ";
            // cout << endl;
            // for(int i = 0; i < n; i++)
            // cout<< a[i] << " ";
            // cout << endl;
            long long int notes = 0;
            for(long long int i = 0; i < n; i++)
            {
                notes += (a[i]/sub);
            }
            cout << notes << endl;
        }
    }
}
