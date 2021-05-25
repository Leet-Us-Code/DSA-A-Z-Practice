// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void subsetSumHelper(vector<int> a, int i, int sum, vector<int> &out)
    {
        if(i == a.size())
        {
            out.push_back(sum);
            return;
        }
        else
        {
            subsetSumHelper(a, i+1, sum, out);
            subsetSumHelper(a, i+1, sum+a[i], out);
        }
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<int> out;
        subsetSumHelper(arr, 0, 0, out);
        sort(out.begin(), out.end());
        return out;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
