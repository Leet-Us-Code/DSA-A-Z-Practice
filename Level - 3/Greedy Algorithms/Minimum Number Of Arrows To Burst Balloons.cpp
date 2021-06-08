class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int i = 0, j = 0;
        vector<pair<int, int>> p;
        for(int i = 0; i < points.size(); i++)
        {
            p.push_back(make_pair(points[i][0], points[i][1]));
        }
        int n = p.size();
        int k = 0; 
        sort(p.begin(), p.end());
        //same like mergin intervals but the only difference being we must update the starting term to max of both and the ending term to the min of both
        while(i < n)
        {
            p[k].first = p[i].first;
            p[k].second = p[i].second; 
            while(i < n && p[i].first <= p[k].second)
            {
                p[k].first = max(p[k].first, p[i].first);
                p[k].second = min(p[k].second, p[i].second);
                i++;
            }
            k++;
        }
        return k;
    }
};
