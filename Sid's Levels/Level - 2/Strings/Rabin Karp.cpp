// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code here.
            //OM GAN GANAPATHAYE NAMO NAMAH 
            //JAI SHRI RAM 
            //JAI BAJRANGBALI
            //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
            vector<int> res;
            int m = pat.length();
            int n = txt.length();
            int q =  101;
            int i, j, p = 0, t = 0, h = 1, d = 256;
            for(i = 0; i < m-1; i++)
            {
                h = (h*d)%q;
            }
            for(i = 0; i < m; i++)
            {
                p = (d*p + pat[i])%q;
                t = (d*t + txt[i])%q;
            }
            for(i = 0; i <= n-m; i++)
            {
                if(p == t)
                {
                    for(j = 0; j < m; j++)
                    {
                        if(txt[i+j] != pat[j])
                        break;
                    }
                    if(j == m)
                    res.push_back(i+1);
                }
                if(i < n-m)
                {
                    t = (d*(t-txt[i]*h) + (txt[i+m]))%q;
                    if(t < 0)
                    t = t + q;
                }
            }
            if(res.size() == 0)
            res.push_back(-1);
            return res;
        }
     
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends
