// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> overlappedInterval(vector<pair<int,int>> , int );

// User code will be pasted here

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        vector<pair<int,int> > arr,res;
        int n,x,y;
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            arr.push_back(make_pair(x,y));
        }
        
        res = overlappedInterval(arr,n);
        
        
        for(int i=0;i<res.size();i++)
            cout << res[i].first << " " << res[i].second << " " ;
            
        cout<<endl;
    }
}
// } Driver Code Ends


//User function template for C++

vector<pair<int,int>> overlappedInterval(vector<pair<int,int>> vec, int n) {
    //code here
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    sort(vec.begin(),vec.end());
    stack<pair<int,int>> s;
    s.push(make_pair(vec[0].first,vec[0].second));
    vector<pair<int,int>> res;
    for(int i = 1; i < n; i++)
    {
        if(s.top().second >= vec[i].first)
        {
            if(s.top().second < vec[i].second)
            s.top().second = vec[i].second;
        }
        else
        s.push(make_pair(vec[i].first,vec[i].second));
    }
    while(!s.empty())
    {
        res.push_back(make_pair(s.top().first,s.top().second));
        
        s.pop();
    }
    sort(res.begin(),res.end());
    return  res;
}
