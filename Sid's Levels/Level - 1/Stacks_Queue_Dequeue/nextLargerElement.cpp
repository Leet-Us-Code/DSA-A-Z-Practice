// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to store Next larger elements


vector <long long> nextLargerElement(long long arr[], int n){
    // Your code here
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    vector<long long> result(n,0);
    stack<long long> s;
    s.push(0);
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > arr[s.top()])
        {
        while(s.empty() == false && arr[i] > arr[s.top()])
        {
            int x = s.top();
            result[x] = arr[i];
            s.pop();
        }
        s.push(i);
        }
        else
        s.push(i);
    }
    while(!s.empty())
    {
        result[s.top()] = -1;
        s.pop();
    }
    return result;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        vector <long long> res = nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
  // } Driver Code Ends
