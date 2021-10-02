// Hari

int lengthOfLongestSubstring(string s) {
        // fast io
        ios_base::sync_with_stdio(false);
        int l = 0, r = 0;
        unordered_map<char, int> umap;
        int maxLen = 0;
        int N = s.size();
        
        while(r < N){
            if(umap.find(s[r]) != umap.end()){
                // char in r idx already exists before it
                l = max(l, umap[s[r]] + 1); // next valid l
            }
            umap[s[r]] = r;
            maxLen = max(maxLen, r - l + 1);
            r += 1;
        }
        return maxLen; 
    }
