//OM GAN GANAPATHAHYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
struct Item 
{
    int s;
    int p; 
    int v;
};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n; 
        vector<Item> items;
        for(int i = 0; i < n; i++)
        {
            int s, p, v;
            cin >> s >> p >> v;
            items.push_back({s, p, v});
        }
        int maxProfit = INT_MIN;
        for(int i = 0; i < items.size(); i++)
        {
            int profit = (items[i].p/ (items[i].s + 1))*items[i].v; 
            maxProfit = max(maxProfit, profit);
        }
        cout << maxProfit << endl;
    }
}
