// { Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

int lcs(int, int, string, string);

int main()
{
    int t,n,k,x,y;
    
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        
        cout << lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
// } Driver Code Ends


// function to find longest common subsequence

int lcs(int m, int n, string X, string Y){
    
    // your code here
    // OM GAN GANAPATHAYE NAMO NAMAH 
    // JAI SHRI RAM 
    // JAI BAJRANGBALI
    // AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int dp[m + 1][n + 1];  
    int i, j;
    for (i = 0; i < m+1; i++)  
    {  
        for (j = 0; j < n+1; j++)  
        {  
        if (i == 0 || j == 0)  
            dp[i][j] = 0;  
      
        else if (X[i - 1] == Y[j - 1])  
            dp[i][j] = dp[i - 1][j - 1] + 1;  
      
        else
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);  
        }  
    }  
    return dp[m][n];  
}
