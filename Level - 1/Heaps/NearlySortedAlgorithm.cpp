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
        int n, k;
        cin >> n >> k;
        vector<int> res;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            res.push_back(x);
        }
        int i;
        priority_queue<int, vector<int>, greater<int>> p;
        for(i = 0; i <= k; i++)
        {
            p.push(res[i]);
        }
        if(k >= n) // case when n = 3 and  k = 3 and arr[] = {2,1,3} and output is 0, 1, 2, 3
        p.pop();
        int ind = i;
        while(!p.empty())
        {
            cout << p.top() << " ";
            p.pop();
            if(i < n)
            {
                p.push(res[i]);
                i++;
            }
        }
        cout << endl;
    }
}
