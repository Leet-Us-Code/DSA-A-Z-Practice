// Hari

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
