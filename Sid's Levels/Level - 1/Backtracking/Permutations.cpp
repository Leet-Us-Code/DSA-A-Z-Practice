//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
void permutations(string s, int start, int end, vector<string> &permute)
{
    if(start == end)
    {
        permute.push_back(s);
        return;
    }
    else
    {
        for(int i = start; i <= end; i++)
        {
            swap(s[start],s[i]);
            permutations(s,start+1,end,permute);
            swap(s[start],s[i]);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        vector<string> permute;
        permutations(s,0,s.length()-1,permute);
        sort(permute.begin(),permute.end());
        for(int i = 0; i < permute.size(); i++)
        cout << permute[i] << " ";
        cout << endl;
    }
}
