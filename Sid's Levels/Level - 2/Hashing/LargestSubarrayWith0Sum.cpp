// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int maxLen(int A[], int n);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cout << maxLen(A, N) << endl;
    }
}
// } Driver Code Ends


/*You are required to complete this function*/

int maxLen(int A[], int n)
{
    // Your code here
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    map<int, int> freq;
    int sum[100000];
    sum[0] = A[0];
    for(int i = 1; i < n+1; i++)
    sum[i] = A[i-1] + sum[i-1];
    int maxL = 0;
    for(int i = 0; i < n+1; i++)
    {
        if(freq[sum[i]] == 0)
        {
            freq[sum[i]] = i+1;
        }
        else
        {
            maxL = max(maxL, i - freq[sum[i]] + 1);
        }
    }
    return maxL;
}
