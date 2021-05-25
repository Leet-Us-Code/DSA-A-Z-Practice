// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


vector<int> kLargest(int arr[], int n, int k)
{
    // code here
    vector<int> res;
    sort(arr,arr+n);
    reverse(arr,arr+n);
    for(int i = 0; i < k; i++)
    {
        res.push_back(arr[i]);
    }
    return res;
}

// { Driver Code Starts.
vector<int> kLargest(int arr[], int n, int k);

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n;i++)
            cin>>arr[i];
        
        vector<int> result = kLargest(arr, n, k);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout << endl;
        
    }
    return 0;
}
  // } Driver Code Ends
