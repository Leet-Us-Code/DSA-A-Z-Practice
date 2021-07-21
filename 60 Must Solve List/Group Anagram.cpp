// Hari

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // sort all words in ascending order. Use hashmap with key as sorted string and val
        // as string vector of all the variations of key val
        
        vector<vector<string>> res;
        unordered_map<string, vector<string>> umap;
        
        for(auto it: strs){
            auto temp = it;
            sort(temp.begin(), temp.end());
            // temp is sorted and "it" is not
            umap[temp].push_back(it);            
        }
        
        for(auto it: umap){
            // for each sorted string key, push its anagrams vector into final 2D vector res
            res.push_back(it.second);
        }
        
        return res;
    }
};
