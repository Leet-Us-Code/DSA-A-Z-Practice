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
  //Your code here
  //OM GAN GANAPATHAYE NAMO NAMAH 
  //JAI SHRI RAM 
  //JAI BAJRANGBALI 
  //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
  set<int> freq;
  for(int i = 0; i < N; i++)
  {
      freq.insert(arr[i]);
  }
  int maxL = -1;
  for(int i = 0; i < N; i++)
  {
      //check if the element is the starting point or not -> it is the 
      //starting point if the element arr[i]-1 exits in the map 
      if(freq.find(arr[i]-1) == freq.end())
      {
          //not the starting point 
          int j = arr[i];
          while(freq.find(j) != freq.end())
          j++;
          maxL = max(j-arr[i],maxL);
      }
  }
  return maxL;
}
