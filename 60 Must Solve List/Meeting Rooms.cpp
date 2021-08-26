class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    static bool comp(pair<int, int> p1, pair<int, int> p2)
    {
        return p1.second < p2.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        int meetings = 1;
        vector<pair<int, int> > mp;
        for(int i = 0; i < n; i++)
        {
            mp.push_back({start[i], end[i]});
        }
        sort(mp.begin(), mp.end(), comp);
        int i = 0, j = 0;
        while(i < n && j < n)
        {
            if(mp[i].first <= mp[j].second)
            {
                i++;
            }
            else
            {
                meetings++;
                j = i;
            }
        }
        return meetings;
    }
};
