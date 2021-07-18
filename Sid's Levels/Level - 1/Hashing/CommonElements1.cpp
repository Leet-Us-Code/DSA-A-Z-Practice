// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

//Back-end complete function Template for C++

vector<int> common_element(vector<int>v1,vector<int>v2)
{
    // Your code here
    //OM GAN GANAPATHAYE NAMO NAMAH
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    map<int,int> freq1;
    map<int,int> freq2;
    for(int i = 0; i < v1.size(); i++)
    {
        freq1[v1[i]]++;
    }
    for(int i = 0; i < v2.size(); i++)
    {
        freq2[v2[i]]++;
    }
    int max = 100000;
    vector<int> res;
    for(int i = 0; i < max; i++)
    {
        while(freq1[i] != 0 && freq2[i] != 0)
        {
            res.push_back(i);
            freq1[i]--;
            freq2[i]--;
        }
    }
    return res;
}

// { Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int>v1(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int m;
        cin>>m;
        vector<int>v2(m,0);
        for(int i=0;i<m;i++)
        {
            cin>>v2[i];
        }
        vector<int>result;
        result=common_element(v1,v2);
        for(auto i:result)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
}  // } Driver Code Ends
