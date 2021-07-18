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
        int n;
        cin >> n;
        vector<int> cards;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cards.push_back(x);
        }
        vector<int> maximum;
        int maxi = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            maxi = max(maxi, cards[i]);
            maximum.push_back(maxi);
        }
        stack<int> s;
        vector<int> res;
        s.push(cards[0]);
        for(int i = 1; i < n; i++)
        {
            if(maximum[i] == maximum[i-1])
            {
                s.push(cards[i]);
            }
            else
            {
                while(!s.empty())
                {
                    res.push_back(s.top());
                    s.pop();
                }
                s.push(cards[i]);
            }
        }
        while(!s.empty())
        {
            res.push_back(s.top());
            s.pop();
        }
        reverse(res.begin(), res.end());
        for(int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
        cout << endl;
        
    }
}
