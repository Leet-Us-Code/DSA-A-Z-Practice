// Hari

int lengthOfLongestSubstring(string s) {
        // fast
        ios_base::sync_with_stdio(false);
        int N = s.size();
        
        unordered_map<char, int> umap;
        int l = 0, r = 0, maxLen = 0;
        
        while(r < N) {
            auto it = umap.find(s[r]);
            if (it == umap.end()) {
                // element @ r is not in map. So s[r] is not in substring till now. 
                // Change maxLen, add s[r] to umap, increase r 
                umap.insert(make_pair(s[r], r));
            } else {
                // s[r] element is already in substring due to presence in some older index. 
                // Increment l to just above that old occurence so that new substring will 
                // have that element only at r and not older spot also. 
                
                // change l position, update element's value in map to r, check maxLen updation
                l = max(it->second + 1, l); // so that we don't take l to any positions behind
                // current l position [won't impact maxLen]. Dry run using "abba" to get it. 
                it->second = r;
            }
            maxLen = max(maxLen, r - l + 1);
            r += 1;
        }
        
        return maxLen;
    }
