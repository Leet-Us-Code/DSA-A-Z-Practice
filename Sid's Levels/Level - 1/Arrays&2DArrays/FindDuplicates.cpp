// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
vector<int> duplicates(int arr[], int n);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> ans = duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> duplicates(int a[], int n) {
    // code here
    //OM GAN GANAPATHAYE NAMO NAMAH
    //JAI SHRI RAM
    //JAI BAJRANGBALI
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int freq[100000]={0},i;
    vector<int>dup;
    for(i=0;i<n;i++)
    freq[a[i]]++;
    for(i=0;i<100000;i++)
    {
        if(freq[i]>1)
        dup.push_back(i);
    }
    sort(dup.begin(),dup.end());
    if(dup.size()==0)
    {
        vector<int>x;
        x.push_back(-1);
        return x;
    }
    else
    return dup;
}
