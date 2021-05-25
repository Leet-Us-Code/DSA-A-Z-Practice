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
        string expr;
        cin >> expr;
        stack<char> s;
        int flag = 0;
        for(int i = 0; i < expr.length(); i++)
        {
            char ch = expr[i];
            if(ch != ')')
            {
                s.push(ch);
            }
            else if(ch == ')' && s.top() == '(')
            {
                flag = 1;
                break;
            }
            else if(ch == ')' && s.top() != '(')
            {
                while(s.top() != '(')
                {
                    s.pop();
                }
                s.pop();
            }
        }
        if(flag == 1)
        cout << "Duplicates detected" << endl;
        else
        cout << "No duplicates detected" << endl;
    }
}
