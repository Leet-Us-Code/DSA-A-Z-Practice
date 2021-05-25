// { Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;


bool subArrayExists(int arr[], int n);
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    	if (subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}// } Driver Code Ends


//Complete this function
bool subArrayExists(int arr[], int n)
{
    //Your code here
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int sum[100000];
    sum[0] = arr[0];
    for(int i = 1; i < n; i++)
    {
        sum[i] = arr[i] + sum[i-1];
    }
    bool res = false;
    for(int i = 0; i < n; i++)
    {
        if(sum[i] == 0)
        {
            res = true;
            return res;
        }
    }
    map<int, int> freq;
    for(int i = 0; i < n; i++)
    freq[sum[i]]++;
    for(int i = 0;  i < n; i++)
    {
        if(freq[sum[i]] > 1)
        {
            return true;
        }
    }
    return false;
}


