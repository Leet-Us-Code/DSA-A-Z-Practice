// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// function to find the triplet which sum to x
// arr[] : The input Array
// N : Size of the Array
// X : Sum which you need to search for 

bool find3Numbers(int arr[], int N, int X)
{
    //Your Code Here
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    sort(arr, arr+N);
    for(int i = 0; i < N-1 ; i++)
    {
        int tar = X - arr[i];
        int l = i+1; 
        int r = N-1;
        while(l < r)
        {
            if(arr[l] + arr[r] == tar)
            {
                return true;
            }
            else if(arr[l] + arr[r] > tar)
            {
                r--;
            }
            else 
            {
                l++;
            }
        }
    }
    return false;
}


// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,sum;
		cin>>N>>sum;
		int i,A[N];
		for(i=0;i<N;i++)
			cin>>A[i];
        cout <<  find3Numbers(A, N, sum) << endl;
    }
}
  // } Driver Code Ends
