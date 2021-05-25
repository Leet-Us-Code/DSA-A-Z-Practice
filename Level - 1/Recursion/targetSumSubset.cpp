//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
void printAll(vector<int> inp, int i, int sum, vector<int> out)
{
    if(sum == 0)
    {
        if(out.size() != 0)
        for(int i = 0; i < out.size(); i++)
        cout << out[i] << " ";
        cout << endl;
        return;
    }
    if(i == inp.size())
    return;
    printAll(inp,i+1,sum,out);
    out.push_back(inp[i]);
    printAll(inp,i+1,sum-inp[i],out);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int x;
        cin >> x;
        vector<int> inp, out;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            inp.push_back(x);
        }
        printAll(inp,0,x,out);
        cout << endl;
    }
}
