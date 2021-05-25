//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
void showStack(stack<int> s)
{
    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    showStack(s);
    cout << "The size of the stack is : " << s.size() << endl;
    cout << "The top element of the stack is : " << s.top() << endl;
    s.pop();
    showStack(s);
    cout << "The top element of the stack is : " << s.top() << endl; 
    
}
