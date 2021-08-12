class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        vector<bool> slots(n, false);
        vector<pair<int, int> > x;
        for(int i = 0; i < n; i++)
        {
            x.push_back(make_pair(arr[i].profit, arr[i].dead));
        }
        sort(x.begin(), x.end());
        reverse(x.begin(), x.end());
        int total = 0;
        int jobs = 0;
        for(int i = 0; i < n; i++)
        {
            //start from last possible slot 
            for(int j = min(n, x[i].second)-1; j >= 0; j--)
            {
                if(slots[j] == false)
                {
                    jobs++;
                    total += x[i].first;
                    slots[j] = true;
                    break;
                }
            }
        }
        vector<int> res;
        res.push_back(jobs);
        res.push_back(total);
        return res;
    } 
};
