class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<vector<int>> result;
        int p1 = 0, p2 = 0;
        int n = intervals.size();
        vector<pair<int, int>> inter;
        int res[10000][2];
        for(int i = 0; i < intervals.size(); i++)
        {
            inter.push_back(make_pair(intervals[i][0], intervals[i][1]));
        }
        sort(inter.begin(), inter.end());
        int j = 0;
        while(p1 < n && p2 < n)
        {
            res[j][0] = inter[p1].first;
            res[j][1] = inter[p1].second;
            while(p2 < n && res[j][1] >= inter[p2].first)
            {
                res[j][0] = min(res[j][0], inter[p2].first);
                res[j][1] = max(res[j][1], inter[p2].second);
                p2++;
            }
            j++;
            p1 = p2;
        }
        for(int i = 0; i < j; i++)
        {
            vector<int> temp;
            temp.push_back(res[i][0]);
            temp.push_back(res[i][1]);
            result.push_back(temp);
        }
        return result;
    }
};
