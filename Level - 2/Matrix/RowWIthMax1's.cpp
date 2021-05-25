// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:
    int search(vector<int> a)
    {
        int l = 0;
        int res = -1;
        int r = a.size() - 1;
        while(r >= l)
        {
            int mid = (r + l)/2;
            if(a[mid] == 1)
            {
                res = mid;
                r  = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if(res == -1)
        return 0;
        else
        return a.size() - res;
    }
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) 
	{
	    int max1 = 0;
	    int maxInd = -1;
	    for(int i = 0; i < arr.size(); i++)
	    {
	        if(max1 < search(arr[i]))
	        {
	            max1 = search(arr[i]);
	            maxInd = i;
	        }
	    }
	    return maxInd;
	}

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
