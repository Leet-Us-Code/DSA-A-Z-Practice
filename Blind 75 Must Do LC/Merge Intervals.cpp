// Hari

vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // fast
        ios_base::sync_with_stdio(false);
        vector<vector<int>> res;
        if(intervals.size() == 0) return res; // sanity check
        
        sort(intervals.begin(), intervals.end()); 
        vector<int> currInterval = intervals[0];
        
        for(auto it: intervals){
            if(it[0] <= currInterval[1]){
                // add this with currInterval
                currInterval[1] = max(it[1], currInterval[1]); 
            } else {
                // currInterval is over. Push this to final datastructure, and make currInterval as it
                res.push_back(currInterval);
                currInterval = it;
            }
        }
        // the last remaining currInterval should be added to res as wel
        res.push_back(currInterval);
        
        return res;
    }
