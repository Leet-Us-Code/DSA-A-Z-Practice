// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to return minimum number of jumps to end of array
int minJumps(int arr[], int n){
    // Your code here
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int i;
    int dp[n];
    dp[n-1] = 0;
    for(int i = n-2; i >= 0; i--)
    {
        if(arr[i] == 0)
        dp[i] = INT_MAX;
        else if((n-1)-i <= arr[i])
        dp[i] = 1;
        else
        {
            int min = INT_MAX;
            for(int j = i+1; j < n && j <= arr[i] + i; j++)
            {
                if(dp[j] < min)
                min = dp[j];
            }
            if(min != INT_MAX)
            dp[i] = min + 1;
            else
            dp[i] = INT_MAX;
        }
    }
    if(dp[0] == INT_MAX)
    return -1;
    else
    return  dp[0];
}


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
            
        cout<<minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
