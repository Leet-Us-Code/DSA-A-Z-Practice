// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    int josephus(int n, int k)
    {
       //OM GAN GANAPATHAYE NAMO NAMAH 
       //JAI SHRI RAM 
       //JAI BAJRANGBALI 
       //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
       if(n == 1)
       return 1;
       else
       {
           return (josephus(n-1, k) + (k-1))%n + 1;
       }
    }
};



// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}  // } Driver Code Ends
