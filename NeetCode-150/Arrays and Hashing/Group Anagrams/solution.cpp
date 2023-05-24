// Hari

vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        
        // base case
        if (strs.size() == 1) {
            vector<string> val;
            val.push_back(strs[0]);
            res.push_back(val);
            return res;
        }
        
        // create map
        unordered_map<string, vector<string>> umap;
        
        for (int i = 0; i<strs.size(); i++) {
            string curr = strs[i];
            // sort the word
            sort(curr.begin(), curr.end());
            umap[curr].push_back(strs[i]);
        }
        
        for (auto it = umap.begin(); it != umap.end(); it++) {
            res.push_back(it -> second);
        }
        
        return res; 
    }

// Older solution (cleaner) 

vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // fast
        ios_base::sync_with_stdio(false);
        // Logic: all anagrams of a type when sorted, result in same string
        
        vector<vector<string>> res;
        unordered_map<string, vector<string>> umap;
        
        for(auto it: strs){
            string temp = it;
            sort(temp.begin(), temp.end());
            umap[temp].push_back(it);        
        }
        
        for(auto it: umap){
            res.push_back(it.second);
        }
        
        return res;
    }
