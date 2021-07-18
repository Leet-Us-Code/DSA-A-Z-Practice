// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int p1 = 0, p2 = 0;
        int cntr = 0;
        while(p1 < n && p2 < m)
        {
            if(arr1[p1] < arr2[p2])
            {
                cntr++;
                if(cntr == k)
                {
                    return arr1[p1];
                }
                p1++;
            }
            else 
            {
                cntr++;
                if(cntr == k)
                {
                    return arr2[p2];
                }
                p2++;
            }
        }
        while(p1 < n)
        {
            cntr++;
            if(cntr == k)
            return arr1[p1];
            p1++;
        }
        while(p2 < m)
        {
            cntr++;
            if(cntr == k)
            return arr2[p2];
            p2++;
        }
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends
