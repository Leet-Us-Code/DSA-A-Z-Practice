// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends

int nextGap(int gap)
{
    if(gap <= 1)
    return 0;
    else
    return (gap/2) + (gap%2);
}
void merge(int arr1[], int arr2[], int n, int m) 
{ 
    // code here 
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int i, j, gap = n + m;
    for(gap = nextGap(gap); gap > 0; gap = nextGap(gap))
    {
        //for the elements in the first array 
        for(i = 0; i+gap < n; i++)
        {
            if(arr1[i] > arr1[i+gap])
            swap(arr1[i], arr1[i+gap]);
        }
        //for both the array elements
        for(j = gap > n ? gap - n : 0; i < n && j < m; i++, j++)
        {
            if(arr1[i] > arr2[j])
            swap(arr1[i], arr2[j]);
        }
        //for the last array 
        if(j < m)
        {
            for(j = 0; j + gap < m; j++)
            {
                if(arr2[j] > arr2[j + gap])
                swap(arr2[j], arr2[j+gap]);
            }
        }
    }
} 


// { Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    int arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    
	    merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            printf("%d ", arr1[i]); 
        
       
	    for (int i = 0; i < m; i++) 
		    printf("%d ", arr2[i]); 
	    
	    cout<<endl;
	}

	return 0; 
} 
  // } Driver Code Ends
