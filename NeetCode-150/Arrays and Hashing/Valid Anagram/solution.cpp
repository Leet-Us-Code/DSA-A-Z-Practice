// Hari

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> umap;
        
        for (int i = 0; i<s.size(); i++) {
            if (umap.find(s[i]) != umap.end()) {
                umap[s[i]] += 1;
            } else {
                umap[s[i]] = 1;
            }
        }
        
        for (int i = 0; i<t.size(); i++) {
            if (umap.find(t[i]) == umap.end()) {
                // not anagram
                return false;
            } else {
                umap[t[i]] -= 1;
            }
        }
        
        for (auto i = umap.begin(); i != umap.end(); i++) {
            if (i->second != 0) return false; 
        }
        
        return true;
    }
};
