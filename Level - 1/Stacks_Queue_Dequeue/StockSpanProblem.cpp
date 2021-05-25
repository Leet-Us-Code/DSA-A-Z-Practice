//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        vector<long long int> inp;
        long long int n, i;
        cin >> n;
        for(i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            inp.push_back(x);
        }
        reverse(inp.begin(), inp.end());
        vector<long long int> res(n,-1);
        stack<long long int> s;
        s.push(0);
        for(i = 1; i < n; i++)
        {
            while(!s.empty() && inp[i] > inp[s.top()])
            {
                res[s.top()] = i-s.top();
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty())
        {
            res[s.top()] = n-s.top();//edge case this is when there are more than 1 remaining elements
            s.pop();
        }
        reverse(res.begin(),res.end());
        for(i = 0; i < res.size(); i++)
        cout << res[i] << " ";
        cout << endl;
    }
}
