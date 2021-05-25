// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



vector <int> max_of_subarrays(int *arr, int n, int k){
    // your code here
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    deque<int> dq;
    vector<int> res;
    for(int i = 0; i < k; i++)
    {
        //removing the smaller elementss
        while(!dq.empty() && arr[i] >= arr[dq.back()])
        dq.pop_back();
        dq.push_back(i);    
    }
    for(int i = k; i < n; i++)
    {
        res.push_back(arr[dq.front()]);
        //removing elements which are not in window
        while(!dq.empty() && dq.front() <= i-k)
        dq.pop_front();
        //removing small elements
        while(!dq.empty() && arr[i] >= arr[dq.back()])
        dq.pop_back();
        dq.push_back(i);
    }
    res.push_back(arr[dq.front()]);
    return res;
}


// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    
	    vector <int> res = max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
