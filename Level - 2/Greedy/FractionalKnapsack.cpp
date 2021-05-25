// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

// function to return fractionalweights
class Solution
{
    public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    static bool cmp(struct Item a, struct Item b)
    {
        double r1 = (double) a.value/ (double) a.weight; 
        double r2 = (double) b.value/ (double) b.weight;
        return r1 > r2;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr+n, cmp);
        int curWeight = 0;
        double value = 0.0; 
        for(int i = 0; i < n; i++)
        {
            if(curWeight + arr[i].weight <= W)
            {
                curWeight += arr[i].weight;
                value += arr[i].value;
            }
            else 
            {
                int remain = W - curWeight;
                value += arr[i].value*((double)remain/ (double)arr[i].weight);
                break;
            }
        }
        return value;
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends
