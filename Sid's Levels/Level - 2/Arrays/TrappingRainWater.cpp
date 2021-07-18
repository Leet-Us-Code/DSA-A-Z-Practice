// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


   

// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int arr[], int n){

    // Your code here
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int maxR[100000], maxL[100000];
    int maxRight = INT_MIN, maxLeft = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if(maxRight < arr[i])
        maxRight = arr[i];
        maxR[i] = maxRight;
    }
    for(int i = n-1; i >= 0; i--)
    {
        if(maxLeft < arr[i])
        maxLeft = arr[i];
        maxL[i] = maxLeft;
    }
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += min(maxL[i], maxR[i]) - arr[i];
    }
    return sum;
    
}

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        
        //calling trappingWater() function
        cout << trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends
