//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
void allSubsequences(vector<int> a, int i, vector<int> output)
{
    if(i == a.size())
    {
        if(output.size() != 0)
        {
            for(int j = 0; j < output.size(); j++)
            {
                cout << output[j] << " ";
            }
            cout << endl;
        }
        return;
    }
    else
    {
        //dont add the current element
        allSubsequences(a,i+1,output);
        //add the current element
        output.push_back(a[i]);
        allSubsequences(a,i+1,output);
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        int i;
        for(i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        vector<int> output;
        vector<vector<int>> all;
        allSubsequences(a,0,output);
        cout << endl;
    }
}
