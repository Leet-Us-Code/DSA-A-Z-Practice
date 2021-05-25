// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


void segregateElements(int [], int );

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
// } Driver Code Ends




void segregateElements(int arr[],int n)
{
    // Your code goes here
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    vector<int> pos, neg;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > 0)
        pos.push_back(arr[i]);
        else
        neg.push_back(arr[i]);
    }
    vector<int> comb;
    for(int i = 0; i < pos.size(); i++)
    comb.push_back(pos[i]);
    for(int i = 0; i < neg.size(); i++)
    comb.push_back(neg[i]);
    for(int i = 0; i < comb.size(); i++)
    arr[i] = comb[i];
}
