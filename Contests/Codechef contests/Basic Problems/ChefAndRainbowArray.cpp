//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(vector<long long int> x)
{
    long long int i;
    for(i = 0; i < x.size(); i++)
    {
        if(x[i] != x[x.size()-i-1])
        return false;
    }
    return true;
}
bool checkAllChar(vector<long long int> x)
{
    int i;
    set<long long int> s;
    for(i = 0; i < x.size(); i++)
    {
        if(x[i] != 1 && x[i] != 2 && x[i] != 3 && x[i] != 4 && x[i] != 5 && x[i] != 6 && x[i] != 7)
        return false;
        s.insert(x[i]);
    }
    if(s.size() != 7)
    return false;
    else
    return true;
}
bool checkAllignment(vector<long long int> x)
{
    int n = x.size();
    vector<long long int> y,z,com;
    long long int i;
    for(i = 0; i < n/2; i++)
    y.push_back(x[i]);
    for(i = n/2; i < n; i++)
    z.push_back(x[i]);
    sort(y.begin(),y.end());
    sort(z.begin(),z.end());
    reverse(z.begin(),z.end());
    for(i = 0; i < y.size(); i++)
    com.push_back(y[i]);
    for(i = 0; i < z.size(); i++)
    com.push_back(z[i]);
    for(i = 0; i < com.size(); i++)
    {
        if(x[i] != com[i])
        return false;
    }
    return true;
}
int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> a;
        int i;
        for(i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        if(isPalindrome(a))
        {
            if(checkAllChar(a))
            {
                if(checkAllignment(a))
                {
                    cout << "yes" << endl;
                }
                else
                {
                    cout << "no" << endl;
                }
            }
            else
            {
                cout << "no" << endl;
            }
        }
        else
        {
            cout << "no" << endl;
        }
    }
}
