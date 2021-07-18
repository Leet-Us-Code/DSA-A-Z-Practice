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
        long long int count[100000];
        count[0] = 1;
        count[1] = 2;
        long long int i;
        long long int c = pow(10,9) + 7;
        for(i = 2; i < 100000; i++)
        count[i] = ((count[i-1]%c) + (count[i-2]%c))%c;
        return count[n-1];
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
