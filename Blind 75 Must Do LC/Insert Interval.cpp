// Hari

vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        // fast io
        ios_base::sync_with_stdio(false);
        vector<vector<int>> res;
        int N = intervals.size();
        int i = 0;
        
        // left intervals without merge with newInterval
        while(i < N && intervals[i][1] < newInterval[0]){
            res.push_back(intervals[i++]);
        }
        
        // newIntervals (can merge or not merge)
        while(i < N && intervals[i][0] <= newInterval[1]){
            newInterval[0] = min(intervals[i][0], newInterval[0]);
            newInterval[1] = max(intervals[i][1], newInterval[1]);
            i += 1;
        }
        res.push_back(newInterval);
        
        // right intervals without merge with newInterval
        while(i < N && intervals[i][0] > newInterval[1]){
            res.push_back(intervals[i++]);
        }
        
        return res;
    }
