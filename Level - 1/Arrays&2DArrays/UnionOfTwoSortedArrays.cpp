// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//arr1,arr2 : the arrays
// n, m: size of arrays
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    //Your code here
    //return vector with correct order of elements
    //OM GAN GANAPATHAYE NAMO NAMAH
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int i,j;
    unordered_set<int> unique;
    vector<int> uni;
    i = 0;
    j = 0;
    while(i<n && j<m)
    {
        while(i<n-1 && arr1[i]==arr1[i+1])
        i++;
        while(j<m-1 && arr2[j]==arr2[j+1])
        j++;
        if(arr1[i]>arr2[j])
        {
            uni.push_back(arr2[j]);
            j++;
        }
        else if(arr2[j]>arr1[i])
        {
            uni.push_back(arr1[i]);
            i++;
        }
        else if(arr2[j]==arr1[i])
        {
            uni.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    while(i<n)
    {
        while(i<n-1 && arr1[i]==arr1[i+1])
        i++;
        uni.push_back(arr1[i]);
        i++;
    }
    while(j<m)
    {
        while(j<m-1 && arr2[j]==arr2[j+1])
        j++;
        uni.push_back(arr2[j]);
        j++;
    }
    return uni;
}

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    
	    vector<int> ans = findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
