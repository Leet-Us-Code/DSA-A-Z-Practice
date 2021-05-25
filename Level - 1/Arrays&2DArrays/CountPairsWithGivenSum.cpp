// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        //OM GAN GANAPATHAYE NAMO NAMAH
        //JAI SHRI RAM
        //JAI BAJRANGBALI
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        map<int,int>freq;
        set<int>unique;
        vector<int>a;
        int i;
        for(i=0;i<n;i++)
        {
            freq[arr[i]]++;
            unique.insert(arr[i]);
        }
        for(auto it = unique.begin();it!=unique.end();it++)
        {
            a.push_back(*it);    
        }
        int c=0;
        int l=0,r=a.size()-1;
        while(l<r)
        {
            if(a[l]+a[r]==k)
            {
                c=c+(freq[a[l]]*freq[a[r]]);
                l++;
                r--;
            }
            else if(a[l]+a[r]>k)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        if(k%2==0)
        {
            c=c+(freq[(k/2)]*(freq[(k/2)]-1))/2;
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
