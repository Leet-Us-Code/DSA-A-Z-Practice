// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends


// Prints minimum number of platforms reqquired 

pair<int,int> JobScheduling(Job arr[], int n) 
{ 
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    //find the total number of slots available 
    int slots = 0;
    for(int i = 0; i < n; i++)
    {
        if(slots < arr[i].dead)
        slots = arr[i].dead;
    }
    int slotAlloc[slots] = {0};
    vector<pair<int, int>> x;
    for(int i = 0; i < n; i++)
    {
        x.push_back(make_pair(arr[i].profit,arr[i].dead));
    }
    sort(x.begin(),x.end());
    reverse(x.begin(),x.end());
    int profit = 0;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        int flag = 0;
        int j;
        for( j = 0; j <= x[i].second-1; j++)
        {
            if(slotAlloc[j] == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            slotAlloc[j] = x[i].first;
            profit = profit + x[i].first;
            count++;
        }
    }
    pair<int,int> res = make_pair(count,profit);
    return res;
} 



// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        //function call
        pair<int,int> ans = JobScheduling(arr, n);
        cout<<ans.first<<" "<<ans.second<<endl;
    }
	return 0; 
}


  // } Driver Code Ends
