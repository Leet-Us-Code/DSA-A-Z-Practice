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
       vector<int> intersection(int a[], int b[], int n, int m)
       {
           vector<int>c;
           int i = 0;
           int j = 0;
           while(i<n && j<m)
           {
               while(i<n-1 && a[i] == a[i+1])
               i++;
               while(j<m-1 && b[j] == b[j+1])
               j++;
               if(a[i] == b[j])
               {
                   c.push_back(a[i]);
                   i++;
                   j++;
               }
               else if(a[i] > b[j])
               {
                   j++;
               }
               else if(a[i] < b[j])
               {
                   i++;
               }
           }
           return c;
       }
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int> interAandB,interBandC,interAll;
            interAandB = intersection(A,B,n1,n2);
            interBandC = intersection(B,C,n2,n3);
            int intAB[100000],len1;
            len1 = interAandB.size();
            int i;
            for(i = 0; i<len1; i++)
            intAB[i] = interAandB[i];
            int intBC[100000],len2;
            len2 = interBandC.size();
            for(i = 0; i<len2; i++)
            intBC[i] = interBandC[i];
            interAll = intersection(intAB, intBC, len1, len2);
            return interAll;
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
