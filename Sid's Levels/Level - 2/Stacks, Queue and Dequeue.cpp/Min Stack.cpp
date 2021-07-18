/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/
//OM GAN GANAPAATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
/*returns min element from stack*/
int _stack :: getMin()
{
   //Your code here
   if(s.empty())
   return -1;
   else
   return minEle;
}

/*returns poped element from stack*/
int _stack ::pop()
{
   //Your code here
   if(s.empty())
   return -1;
   else
   {
       
       if(s.top() >= minEle)
       {
           int x = s.top();
           s.pop();
           return x;
       }
       else
       {
           int x = minEle;
           minEle = 2*x - s.top();
           s.pop();
           return x;
       }
   }
}

/*push element x into the stack*/
void _stack::push(int x)
{
   //Your code here
   if(s.empty())
   {
       minEle = x;
       s.push(x);
   }
   else if(x >= minEle)
   {
       s.push(x);
   }
   else
   {
       s.push(2*x-minEle);
       minEle = x;
   }
}
