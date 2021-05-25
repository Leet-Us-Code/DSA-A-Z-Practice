// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


vector<int> kLargest(int arr[], int n, int k)
{
    // code here
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    priority_queue<int> gq; // creating a max heap 
    //push all the elements of the array into the max heap 
    for(int i = 0; i < n; i++)
    {
        gq.push(arr[i]);
    }
    vector<int> res;
    int cnt = 0;
    
    while(cnt < k && !gq.empty())
    {
        res.push_back(gq.top());
        gq.pop();
        cnt++;
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
