// Hari

// Using vector (best TC)
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> counter(26, 0);
        for(auto it: s){
            counter[it - 'a']++;
        }
        
        for(int i = 0; i<s.size(); i++){
            if(counter[s[i] - 'a'] == 1) return i;
        }
        
        return -1;
    }
};

// Using hashmap

// 1 (lesser efficient)

int firstUniqChar(string s) {
        unordered_map<int, int> umap;
        for(auto it: s){
            umap[it - 'a'] += 1;
        }
        
        for(int i = 0; i<s.size(); i++){
            if(umap[s[i] - 'a'] == 1) return i;
        }
        return -1;
    }

// 2 (even less)

int firstUniqChar(string s) {
        unordered_map<char, pair<int, int>> umap;
        
        for(int i = 0; i<s.size(); i++){
            umap[s[i] - 'a'].first++; // freq
            umap[s[i] - 'a'].second = i; // index
        }
        
        int idx = s.size();
        for(auto it: umap){
            if(it.second.first == 1){
                idx = min(idx, it.second.second);
            }
        }
        
        return idx == s.size() ? -1: idx;
    }
