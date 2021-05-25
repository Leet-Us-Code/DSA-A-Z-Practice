// { Driver Code Starts
// C++ program to evaluate value of a postfix expression
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// The main function that returns value of a given postfix expression
int evaluatePostfix(string &s)
{
    // Your code here
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    stack<int> res;
    for(int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if(ch == '0' || ch == '1' || ch == '2' || ch  == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9')
        {
            res.push(ch-'0');
        }
        else
        {
            int val2 = res.top();
            res.pop();
            int val1 = res.top();
            res.pop();
            if(ch == '+')
            res.push(val1+val2);
            else if(ch == '-')
            res.push(val1-val2);
            else if(ch == '*')
            res.push(val1*val2);
            else 
            res.push(val1/val2);
        }
    }
    int x;
    x = res.top();
    return x;
}


// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string str;
        cin>>str;
    
    cout<<evaluatePostfix(str)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
