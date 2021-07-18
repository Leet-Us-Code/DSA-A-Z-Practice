// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int sb(int arr[], int n, int x);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		cout<<sb(a,n,x)<<endl;
	}
	return 0;
}// } Driver Code Ends




int sb(int arr[], int n, int x)
{
    // Your code goes here   
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int cont[100000];
    cont[0] = 0;
    for(int i = 0; i < n; i++)
    {
        cont[i+1] = arr[i] + cont[i];
    }
    int l = 0;
    int r = 0;
    int minL = INT_MAX;
    while(l < n+1 && r < n+1)
    {
        if(cont[r] - cont[l] <= x)
        r++;
        else
        {
            minL = min(r-l, minL);
            l++;
        }
    }
    return minL;
}
