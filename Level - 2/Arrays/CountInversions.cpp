// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

long long int merge(long long int arr[], long long int l, long long int mid, long long int r)
{
    long long int n1 = mid- l +1;
    long long int n2 = r-mid;
    long long int left[n1], right[n2];
    for(int i = 0; i < n1; i++)
    {
        left[i] = arr[i+l];
    }
    for(int i = 0; i < n2; i++)
    {
        right[i] = arr[i+mid+1];
    }
    //merge and count 
    long long int c = 0;
    long long int k = l;
    long long int i = 0, j = 0;
    while(i < n1 && j < n2)
    {
        if(left[i] > right[j])
        {
            //inversion exists 
            c = c + (n1 - i);
            arr[k] = right[j];
            k++;
            j++;
        }
        else
        {
            arr[k] = left[i];
            k++;
            i++;
        }
    }
    while(i < n1)
    {
        arr[k] = left[i];
        k++;
        i++;
    }
    while(j < n2)
    {
        arr[k] = right[j];
        k++;
        j++;
    }
    return c;
}
long long int inversions(long long int arr[], long long int l, long long int r)
{
    
    long long int c = 0;
    if(r > l)
    {
        long long int mid = l + ((r-l)/2);
        long long int x = inversions(arr, l, mid);
        long long int y = inversions(arr, mid+1, r);
        long long int z = merge(arr, l, mid, r);
        c += x + y + z;
    }
    return c;
}

long long int inversionCount(long long arr[], long long n)
{
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    return inversions(arr, 0, n-1);
}



// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        
        cout << inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends
