// Hari

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // fast
        ios_base::sync_with_stdio(false);
        vector<vector<int>> res;
        priority_queue<pair<double, vector<int>>, vector<pair<double, vector<int>>>, greater<pair<double, vector<int>>>> pq; // min heap 

        for(auto it: points) {
            // Compute distance - ((x1 - 0) ^ 2 + (y1 - 0) ^ 2) [no need sqrt]
            double dist = (pow(it[0], 2.0) + pow(it[1], 2.0));
            pq.push(make_pair(dist, it));
        }

        while(!pq.empty() && k-- > 0) {
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res; 
    }
};
