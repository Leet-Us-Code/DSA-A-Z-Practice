// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
    /*long long numberOfWays(long long n) {
        //code here
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        long long int c = pow(10,9) + 7;
        if(n == 2)
        return 2;
        if(n == 1)
        return 1;
        int x;
        x = ((numberOfWays(n-1)%c)+(numberOfWays(n-2)%c))%c;
        return x;
    }*/
    long long numberOfWays(long long int n)
    {
        long long int a = 1;
        long long int max = pow(10,9) + 7;
        long long int b = 2;
        long long int c, i;
        if(n == 1)
        return a;
        if(n == 2)
        return b;
        for(i = 2; i < n; i++)
        {
            c = (a%max + b%max)%max;
            a = b;
            b = c;
        }
        return b;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.numberOfWays(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
