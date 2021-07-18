//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int priority(char c)
{
    if(c == '+' || c == '-')
    return 1;
    else if(c == '/' || c == '*')
    return 2;
}
int isDigit(char c)
{
    if(c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9')
    return 1;
    else
    return 0;
}
int perform(int a, int b, char c)
{
    if(c == '+')
    return a+b;
    if(c == '-')
    return a-b;
    if(c == '*')
    return a*b;
    if(c == '/')
    return a/b;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string expr;
        cin >> expr;
        stack<int> oprnds;
        stack<char> oprtrs;
        for(int i = 0; i < expr.length(); i++)
        {
            char ch = expr[i];
            if(ch == '(')
            {
                oprtrs.push(ch);
            }
            else if(isDigit(ch))
            {
                oprnds.push(ch - '0');
            }
            else if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
            {
                while(!oprnds.empty() && !oprtrs.empty() && priority(ch) <= priority(oprtrs.top()) && oprtrs.top() != '(')
                {
                    int num2 = oprnds.top();
                    oprnds.pop();
                    int num1 = oprnds.top();
                    oprnds.pop();
                    char op = oprtrs.top();
                    oprtrs.pop();
                    int x;
                    x = perform(num1,num2,op);
                    oprnds.push(x);
                }
                oprtrs.push(ch);
            }
            else if(ch == ')')
            {
                while(!oprnds.empty() && !oprtrs.empty() && oprtrs.top() != '(')
                {
                    int num2 = oprnds.top();
                    oprnds.pop();
                    int num1 = oprnds.top();
                    oprnds.pop();
                    char op = oprtrs.top();
                    oprtrs.pop();
                    int x;
                    x = perform(num1,num2,op);
                    oprnds.push(x);
                }
                oprtrs.pop();
            }
        }
        while(!oprnds.empty() && !oprtrs.empty())
        {
            int num2 = oprnds.top();
            oprnds.pop();
            int num1 = oprnds.top();
            oprnds.pop();
            char op = oprtrs.top();
            oprtrs.pop();
            int x;
            x = perform(num1,num2,op);
            oprnds.push(x);
        }
        if(!oprnds.empty())
        cout << oprnds.top() << endl;
        else
        cout << "Not balanced" << endl;
    }
}
