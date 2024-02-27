// Hari

class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        // fast
        ios_base::sync_with_stdio(false);
        vector<vector<int>> res;

        /**
        Find out all nodes which can reach Pacific. Similarly Atlantic. Take intersection of both
        sets. Start from a ocean and see which nodes can be accessed instead of other way round 
        as it is faster. Since other way round, from ocean choose next nodes that are >= curr node
        height. 
        */

        int rows = heights.size();
        int cols = heights[0].size();
        set<pair<int, int>> pacific;
        set<pair<int, int>> atlantic;

        // assigning prev node ht = curr node ht as curr node should be valid (water can flow to 
        // corresponding ocean from all nodes at perimeter of grid)
        for(int j = 0; j<cols; j++) {
            dfs(0, j, pacific, heights[0][j], heights, rows, cols); // First row - Pacific 
            dfs(rows-1, j, atlantic, heights[rows-1][j], heights, rows, cols); // Last row - Atlantic
        }

        for(int i = 0; i<rows; i++) {
            dfs(i, 0, pacific, heights[i][0], heights, rows, cols); // First col - Pacific
            dfs(i, cols-1, atlantic, heights[i][cols-1], heights, rows, cols); // Last col - Atlantic
        }

        // Intersection of both sets -> save in res
        for (auto it = pacific.begin(); it != pacific.end(); ++it) {
            if (atlantic.count(*it) > 0) {
                vector<int> temp;
                temp.emplace_back(it->first);
                temp.emplace_back(it->second);
                res.push_back(temp);
            }
        }

        return res;
    }

    void dfs(int i, int j, set<pair<int, int>> &oceanSet, int prevNodeHt, vector<vector<int>>& heights, int rows, int cols) {
        // edge cases
        // oceanSet.find() is crucial to avoid TLE 
        if (oceanSet.find(make_pair(i, j)) != oceanSet.end() || i < 0 || i >= rows || j < 0 || j >= cols || heights[i][j] < prevNodeHt) return; 

        // valid node 
        oceanSet.insert(make_pair(i, j));

        // traverse in all 4 dirn 
        dfs(i-1, j, oceanSet, heights[i][j], heights, rows, cols);
        dfs(i+1, j, oceanSet, heights[i][j], heights, rows, cols);
        dfs(i, j-1, oceanSet, heights[i][j], heights, rows, cols);
        dfs(i, j+1, oceanSet, heights[i][j], heights, rows, cols);
    }
};
