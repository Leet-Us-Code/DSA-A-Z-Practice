// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


int activitySelection(int start[], int end[], int n){
    // Your code here
    //OM GAN GANAPATHAYE NAMO NAMAH
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    //sort according to the ending time 
    vector<pair<int,int>> times;
    for(int i = 0; i < n; i++)
    {
        times.push_back(make_pair(end[i],start[i]));
    }
    sort(times.begin(),times.end());
    int c = 1; // including the first activity
    //since we need maximum activitiy each activity must take minimum end time
    //this is taken care by sorting 
    //now we need to make sure intervals dont overlap 
    int i = 0;
    for(int j = 1; j < n; j++)
    {
        if(times[j].second >= times[i].first)
        {
            c++;
            i = j;
        }
    }
    return c;
}

// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        int start[n], end[n];
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        
        //function call
        cout << activitySelection(start, end, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
