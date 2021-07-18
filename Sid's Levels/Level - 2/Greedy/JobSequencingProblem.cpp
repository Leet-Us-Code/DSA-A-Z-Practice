// { Driver Code Starts
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

class Solution {
  public:
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<pair<int, int>> jobs;
        int timer = 0;
        for(int i = 0; i < n; i++)
        {
            int dead =  arr[i].dead;
            int profit = arr[i].profit;
            jobs.push_back(make_pair(profit, dead));
        }
        sort(jobs.begin(), jobs.end());
        reverse(jobs.begin(), jobs.end());
        int profit = 0;
        int c = 0;
        int slot[n] = {0};
        for(int i = 0; i < n; i++)
        {
            //for each job find a slot of time 
            for(int j = min(jobs[i].second, n)-1; j >= 0; j--)
            {
                if(slot[j] == 0)
                {
                    profit += jobs[i].first;
                    c++;
                    slot[j] = 1;
                    break;
                }
            }
        }
        vector<int> res;
        res.push_back(c);
        res.push_back(profit);
        return res;
    } 
};

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
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends
