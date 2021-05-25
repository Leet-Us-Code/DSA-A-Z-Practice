// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:  
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    
    vector<int> intersection(vector<int> a, vector<int> b)
    {
        int n1 = a.size();
        int n2 = b.size();
        vector<int> inter;
        int i = 0, j = 0;
        while(i < n1 && j < n2)
        {
            while(i < n1-1 && a[i] == a[i+1])
            i++;
            while(j < n2-1 && b[j] == b[j+1])
            j++;
            if(a[i] > b[j])
            {
                j++;
            }
            else if(a[i] < b[j])
            {
                i++;
            }
            else
            {
                inter.push_back(a[i]);
                i++;
                j++;
            }
        }
        return inter;
    }
    vector <int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
    {
        vector<int> a,b,c;
        for(int i = 0; i < n1; i++)
        a.push_back(A[i]);
        for(int i = 0; i < n2; i++)
        b.push_back(B[i]);
        for(int i = 0; i < n3; i++)
        c.push_back(C[i]);
        vector<int> inter1, inter2, inter3;
        inter1 = intersection(a,b);
        inter2 = intersection(b,c);
        inter3 = intersection(inter1, inter2);
        return inter3;
    }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends
