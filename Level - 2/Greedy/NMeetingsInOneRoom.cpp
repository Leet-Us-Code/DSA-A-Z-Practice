// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
        int maxMeetings(int start[], int end[], int n) {
        // Your code here
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<pair<int, int>> inter;
        for(int i = 0; i < n; i++)
        {
            inter.push_back(make_pair(end[i], start[i]));
        }
        sort(inter.begin(), inter.end());
        int i = 0;
        int j = 0;
        int c = 1;
        while(i < n && j < n)
        {
            if(inter[i].second <= inter[j].first)
            i++;
            else
            {
                c++;
                j = i;
            }
        }
        return c;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends
