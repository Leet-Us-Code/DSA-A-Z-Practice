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
        vector<string> forg;
        int i;
        for(i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            forg.push_back(s);
        }
        vector<string> modern;
        int l;
        for(i = 0; i < k; i++)
        {
            cin >> l;
            for(int j = 0; j < l ;j ++)
            {
                string s;
                cin >> s;
                modern.push_back(s);
            }
        }
        for(i = 0; i < forg.size(); i++)
        {
            int x = 0;
            for(int j = 0; j < modern.size(); j++)
            {
                if(forg[i] == modern[j])
                {
                    x = 1;
                    break;
                }
            }
            if(x == 1)
            cout << "YES" << " ";
            else
            cout << "NO" << " ";
        }
        cout << endl;
    }
}
