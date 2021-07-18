// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int n);
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  cout<<findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}// } Driver Code Ends


// arr[] : the input array
// N : size of the array arr[]

// return the length of the longest subsequene of consecutive integers
int findLongestConseqSubseq(int arr[], int N)
{
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int maxL = 1;
    int p1 = 0, p2 = 1;
    int freq[100000] = {0};
    for(int i = 0; i < N; i++)
    {
        if(freq[arr[i]] == 0)
        {
            freq[arr[i]] = 1;
        }
    }
    int n = pow(10,5)+1;
    while(p1 < n && p2 < n)
    {
        if(freq[p2] == 1 && freq[p2-1] == 1)
        {
            p2++;
        }
        else
        {
            maxL = max(maxL, p2-p1);
            p1 = p2;
            p2++;
        }
    }
    maxL = max(maxL, p2-p1);
    return maxL;
}
