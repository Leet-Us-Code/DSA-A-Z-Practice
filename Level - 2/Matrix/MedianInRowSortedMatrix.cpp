// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++

class Solution{   
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int median(vector<vector<int>> &a, int r, int c){
        //we need to find the min and max element
        int min = INT_MAX;
        int max = INT_MIN;
        for(int i = 0; i < r; i++)
        {
            if(a[i][0] < min)
            min = a[i][0];
            if(a[i][c-1] > max)
            max = a[i][c-1];
        }
        int desired = (r*c + 1)/2;
        while(min < max)
        {
            int place = 0;
            int mid = (min + max)/2;
            for(int i = 0; i < r; i++)
            {
                place += upper_bound(a[i].begin(), a[i].end(), mid) - a[i].begin();
            }
            if(place < desired)
            min = mid + 1;
            else
            max = mid;
        }
        return min;
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
        for(int i=0;i<r;++i)
            for(int j=0;j<c;++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends
