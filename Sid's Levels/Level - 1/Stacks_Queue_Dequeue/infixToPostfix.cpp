// { Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// The main function to convert infix expression
//to postfix expression

int priority(char ch)
{
    if(ch == '+' || ch == '-')
    return 1;
    else if(ch == '*' || ch == '/')
    return 2;
    else if(ch == '^')
    return 3;
    else
    return 0;
}
string infixToPostfix(string s)
{
    // Your code here
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int n;
    n = s.length();
    stack<string> post;
    stack<char> opr;
    for(int i = 0; i < n; i++)
    {
        char ch = s[i];
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            string x(1,s[i]);
            post.push(x);
        }
        else if(ch == '(')
        {
            opr.push(ch);
        }
        else if(ch == ')')
        {
            while(!opr.empty() && !post.empty() && opr.top() != '(')
            {
                char op = opr.top();
                opr.pop();
                string val2 = post.top();
                post.pop();
                string val1 = post.top();
                post.pop();
                string s = "";
                s = val1 + val2 + op;
                post.push(s);
            }
            opr.pop();
        }
        else if(ch == '+' || ch == '-' || ch == '*' || ch == '^' || ch == '/')
        {
            while(!opr.empty() && !post.empty() && opr.top() != '(' && priority(ch) <= priority(opr.top()))
            {
                char op = opr.top();
                opr.pop();
                string val2 = post.top();
                post.pop();
                string val1 = post.top();
                post.pop();
                
                string s = "";
                s = val1 + val2 + op;
                post.push(s);
            }
            opr.push(ch);
        }
    }
    while(!opr.empty() && !post.empty())
    {
        char op = opr.top();
        opr.pop();
        string val2 = post.top();
        post.pop();
        string val1 = post.top();
        post.pop();
        string s = "";
        s = val1 + val2 + op;
        post.push(s);
    }
    string res;
    res = post.top();
    return res;
}


// { Driver Code Starts.
//Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string exp;
        cin>>exp;
        cout<<infixToPostfix(exp)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
