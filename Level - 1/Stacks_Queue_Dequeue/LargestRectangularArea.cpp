// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to return Maximum Rectangular area in a histogram
// arr[]: input array
// n: size of array
vector<long long> getNextSmallestRight(vector<long long> inp)
{
    int n = inp.size();
    vector<long long> out(n,-1);
    stack<long long> s;
    s.push(0);
    for(int i = 1; i < n; i++)
    {
        while(!s.empty() && inp[i] < inp[s.top()])
        {
            out[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    //since we have added 0 s at the beginning and the end of the input array
    //the only elements remaining will be zero
    while(!s.empty())
    {
        out[s.top()] = n-1;
        s.pop();
    }
    return out;
}
vector<long long> getNextSmallestLeft(vector<long long> inp)
{
    int n = inp.size();
    stack<long long> s;
    vector<long long> out(n,-1);
    s.push(n-1);
    for(int i = n-2; i >= 0; i--)
    {
        while(!s.empty() && inp[i] < inp[s.top()])
        {
            out[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    //since we have added 0 s at the beginning and the end of the input array
    //the only elements remaining will be zero
    while(!s.empty())
    {
        out[s.top()] = 0;
        s.pop();
    }
    return out;
}
long getMaxArea(long long arr[], int n){
    
    // Your code here
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYNA, BHADRE NARAYANA
    vector<long long> inp;
    inp.push_back(0);
    for(int i = 0; i < n; i++)
    {
        inp.push_back(arr[i]);
    }
    int i;
    inp.push_back(0);
    vector<long long> left = getNextSmallestLeft(inp);
    vector<long long> right = getNextSmallestRight(inp);
    vector<long long> out;
    long long max = -1;
    for(i = 0; i < inp.size(); i++)
    {
        out.push_back(inp[i]*(right[i]-left[i]-1));
    }
    for(i = 0; i < out.size(); i++)
    {
        if(max < out[i])
        max = out[i];
    }
    return max;
    
}

// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        cout<<getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends
