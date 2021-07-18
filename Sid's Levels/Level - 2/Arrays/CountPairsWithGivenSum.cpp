// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        //OM GAN GANAPATHAYE NAMO NAMAH
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        map<int, int> freq;
        for(int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }
        sort(arr, arr+n);
        vector<int> noDup;
        for(int i = 0; i < n; i++)
        {
            while(i < n-1 && arr[i] == arr[i+1])
            i++;
            noDup.push_back(arr[i]);
        }
        sort(noDup.begin(), noDup.end());
        int l = 0;
        int r = noDup.size() - 1;
        int c = 0;
        while(r > l)
        {
            if(noDup[l] + noDup[r] == k)
            {
                c += freq[noDup[l]]*freq[noDup[r]];
                l++;
                r--;
            }
            else if(noDup[l] + noDup[r] > k)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        if(k % 2 == 0)
        {
            c += (freq[k/2]*(freq[k/2]-1))/2;
        }
        return c;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
