// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSMHI NARAYANA, BHADRE NARAYANA
        if(A > B && A > C)
        {
            if(B > C)
            return B;
            else
            return C;
        }
        else if(B > A && B > C)
        {
            if(A > C)
            return A;
            else
            return C;
        }
        else if(C > A && C > B)
        {
            if(A > B)
            return A;
            else
            return B;
        }
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
}  // } Driver Code Ends
