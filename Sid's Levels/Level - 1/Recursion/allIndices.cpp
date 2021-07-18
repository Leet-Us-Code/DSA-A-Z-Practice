//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
void allIndices(vector<int> a, int x, int i, vector<int> &output)
{
    if(i == a.size())
    {
        return ;
    }
    else
    {
        if(a[i] == x)
        {
            output.push_back(i);
            allIndices(a,x,i+1,output);
        }
        else
        allIndices(a,x,i+1,output);
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        vector<int> a;
        int x, i;
        cin >> n;
        int s;
        cin >> s;
        for(i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        vector<int> out;
        allIndices(a,s,0,out);
        for(i = 0; i < out.size(); i++)
        cout << out[i] << " ";
        cout << endl;
    }
}
