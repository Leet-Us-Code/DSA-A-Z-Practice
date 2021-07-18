class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    static bool comp(Job a, Job b)
    {
        return (a.profit > b.profit);
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        //deadlines is the array which says what job is carried out withing which deadline 
        
        //sort based on the profit -> as greedily to maximize the profit we must do the jobs with high profit first 
        vector<Job> a;
        int maxDead = 0;
        for(int i = 0; i < n; i++)
        {
            maxDead = max(maxDead, arr[i].dead);
            a.push_back(arr[i]);
        }
        int deadlines[maxDead+1];
        memset(deadlines, -1, sizeof(deadlines));
        int total = 0;
        int cnt = 0;
        sort(a.begin(), a.end(), comp);
        for(int i = 0; i < n; i++)
        {
            int id = a[i].id;
            int profit = a[i].profit;
            int dead = a[i].dead; 
            for(int j = dead; j > 0; j--)
            {
                if(deadlines[j] == -1)
                {
                    deadlines[j] = id;
                    total += profit;
                    cnt++;
                    break;
                }
            }
        }
        vector<int> res;
        res.push_back(cnt);
        res.push_back(total);
        return res;
    } 
};
