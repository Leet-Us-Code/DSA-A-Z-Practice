// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

long long mod = 1000000007;

long long countWays(int);

int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        
        cout<<countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
// } Driver Code Ends


// function to count ways to reach mth stair
long long countWays(int n){
    // your code here
    int a = 1, b = 2, c, i;
    if(n == 1)
    return a;
    if(n == 2)
    return b;
    int max;
    max = pow(10,9) + 7;
    for(i = 2; i < n; i++)
    {
        c = (a%max + b%max)%max;
        a = b;
        b = c;
    }
    return b;
    /*if(n == 1)
    return 1;
    if(n == 2)
    return 2;
    return countWays(n-1) + countWays(n-2);*/
}
