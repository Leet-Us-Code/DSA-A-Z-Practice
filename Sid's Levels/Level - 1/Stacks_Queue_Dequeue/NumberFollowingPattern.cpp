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
        string str;
        cin >> str;
        int n = str.length();
        stack<int> s;
        string res = "";
        int c = 1;
        for(int i = 0; i < n; i++)
        {
            char ch = str[i];
            if(ch == 'D') // push and increase
            {
                s.push(c);
                c++;
            }
            else // push, increase and pop all to print 
            {
                s.push(c);
                c++;
                while(!s.empty())
                {
                    char x = (char)(s.top() + '0');
                    res.push_back(x);
                    s.pop();
                }
            }
        }
        s.push(c);//at the end push and pop
        while(!s.empty())
        {
            char x = (char)(s.top() + '0');
            res.push_back(x);
            s.pop();
        }
        cout << res << endl;
    }
}
