// Hari

int longestConsecutive(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        
        unordered_set<int> uSet;
        int maxLen = 0;
        
        // inserting all elements to uSet
        for(auto it: nums) {
            uSet.insert(it);
        }
        // pick a number, check if num-1 does not exist -> if so, keep traversing right till number not in uSet -> sequence made
        for(auto it: nums) {
            int len = 0;
            // if a predecesor exists - continue
            if (uSet.find(it-1) != uSet.end()) continue;
            // if it DNE - keep moving right until element not in map
            while(uSet.find(it++) != uSet.end()) {
                len++;
            }
            maxLen = max(maxLen, len);
        }
        
        return maxLen;
    }
