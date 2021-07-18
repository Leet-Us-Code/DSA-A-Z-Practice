// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        //OM GAN GANAPATHAYE NAMO NAMAH
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<int> res;
        for(int i = 0; i < Mat.size(); i++)
        {
            for(int j = 0; j < Mat[i].size(); j++)
            {
                res.push_back(Mat[i][j]);
            }
        }
        sort(res.begin(), res.end());
        vector<vector<int>> r;
        int k = 0;
        for(int i = 0; i < Mat.size(); i++)
        {
            vector<int> x;
            for(int j = 0; j < Mat[0].size(); j++)
            {
                x.push_back(res[k]);
                k++;
            }
            r.push_back(x);
            x.clear();
        }
        return r;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}  // } Driver Code Ends
