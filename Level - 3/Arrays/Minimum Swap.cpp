class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    //OM GAN GANAPATHAYE NAMO NAMAH 
	    //JAI SHRI RAM 
	    //JAI BAJRANGBALI 
	    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
	    vector<pair<int, int>> a;
	    for(int i = 0; i < nums.size(); i++)
	    {
	        a.push_back(make_pair(nums[i], i));
	    }
	    sort(a.begin(), a.end());
	    vector<bool> visited(a.size(), false);
	    int res = 0;
	    for(int i = 0; i < a.size(); i++)
	    {
	        int oldPosition = a[i].second;
	        if(visited[i] == true || oldPosition == i)
	        continue;
	        else 
	        {
	           int current = i;
	           int cycle = 0; // number of elements in the cycle
	           while(visited[current] == false)
	           {
	               visited[current] = true;
	               cycle++;
	               int nextPos = a[current].second;
	               current = nextPos;
	           }
	           res += (cycle - 1);
	        }
	    }
	    return res;
	}
};
