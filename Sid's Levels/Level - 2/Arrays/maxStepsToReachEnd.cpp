// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to return minimum number of jumps to end of array
int minJumps(int a[], int n){
    // Your code here
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int maxReach = a[0];
    int steps = a[0];
    int jump = 1;
    if(a[0] == 0)
    return -1;
    else if(n == 1)
    return 0;
    else
    {
        for(int i = 1; i < n; i++)
        {
            if(i == n-1)
            return jump;
            maxReach = max(maxReach, i + a[i]);
            steps--;
            if(steps == 0)
            {
                jump++;
                if(i >= maxReach)
                return -1;
                steps = maxReach - i;
            }
        }
    }
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
