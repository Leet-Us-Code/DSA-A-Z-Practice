// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here     
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        //find the minimum element -> check the first column 
        int minEle = INT_MAX;
        for(int i = 0; i < r; i++)
        {
            minEle = min(minEle, matrix[i][0]);
        }
        //find the maximum element 
        int maxEle = INT_MAX;
        for(int i = 0; i < r; i++)
        {
            maxEle = max(maxEle, matrix[i][c-1]);
        }
        int res = -1;
        int dez = (r*c+1)/2;
        while(minEle < maxEle)
        {
            int mid = minEle + (maxEle - minEle)/2;
            //search the number of elements less than mid in the matrix 
            int cnt = 0;
            for(int i = 0; i < r; i++)
            {
                cnt += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            }
            if(cnt < dez)
            {
                minEle = mid+1;
            }
            else
            {
                maxEle = mid;
            }
        }
        return minEle;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends
