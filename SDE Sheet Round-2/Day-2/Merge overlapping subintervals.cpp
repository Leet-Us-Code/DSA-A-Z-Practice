// Hari

vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // fast
        ios_base::sync_with_stdio(false);
        vector<vector<int>> finalIntervals;   
        // sanity check
        if(intervals.size() == 0) return finalIntervals;
        
        // sorting the intervals so that all start times are in right order
        sort(intervals.begin(), intervals.end());
        vector<int> currInterval = intervals[0]; 
        
        for(auto it: intervals){
            if(it[0] <= currInterval[1]){
                // merge
                currInterval[1] = max(currInterval[1], it[1]);
            } else {
                // push currentInterval to finalInterval 
                finalIntervals.emplace_back(currInterval);
                currInterval = it;
            }
        }
        finalIntervals.push_back(currInterval); // last element
        return finalIntervals;
    }
