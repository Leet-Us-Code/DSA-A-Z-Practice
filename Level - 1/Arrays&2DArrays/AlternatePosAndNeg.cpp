// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:

	void rearrange(int a[], int n) {
	    // code here
	    //OM GAN GANAPATHAYE NAMO NAMAH
	    //JAI SHRI RAM
	    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
	    //JAI BAJRANGBALI
	    vector<int> neg,pos;
	    int i;
	    for(i = 0; i<n; i++)
	    {
	        if(a[i]>=0)
	        pos.push_back(a[i]);
	        else
	        neg.push_back(a[i]);
	    }
	    int posInd = 0, negInd = 0;
	    i = 0;
	    while(posInd < pos.size() && negInd < neg.size())
	    {
	        if(i%2 == 0)
	        {
	            a[i] = pos[posInd];
	            posInd++;
	        }
	        else
	        {
	            a[i] = neg[negInd];
	            negInd++;
	        }
	        i++;
	    }
	    while(posInd < pos.size())
	    {
	        a[i] = pos[posInd];
	        posInd++;
	        i++;
	    }
	    while(negInd < neg.size())
	    {
	        a[i] = neg[negInd];
	        negInd++;
	        i++;
	    }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
