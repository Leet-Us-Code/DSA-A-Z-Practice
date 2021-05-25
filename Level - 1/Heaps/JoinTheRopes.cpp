// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Position this line where user code will be pasted.
long long minCost(long long arr[], long long n);
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << minCost(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


long long minCost(long long arr[], long long n) {
    // Your code here
    //OM GAN GANAPATHAYE NAMO NAMAH
    //JAI SHRI  RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    priority_queue<long long int, vector<long long int>, greater<long long int>> rope;
    for(int i = 0; i < n; i++)
    rope.push(arr[i]);
    long long int sum = 0;
    while(rope.size() > 1)
    {
        long long int x1 = rope.top();
        rope.pop();
        long long int x2 = rope.top();
        rope.pop();
        rope.push(x1+x2);
        sum = sum + (x1+x2);
    }
    return sum;
}
