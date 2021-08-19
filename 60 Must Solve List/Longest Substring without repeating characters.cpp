// Hari

int lengthOfLongestSubstring(string s) {
        // fast
        ios_base::sync_with_stdio(false); 
        unordered_map<char, int> umap; // letter and its latest idx
        int l = 0, r = 0;
        int maxLen = 0;
        int N = s.size();
        
        while(r < N){
            if(umap.find(s[r]) != umap.end()){
                // element is there in map. Replace its index 
                l = max(l, umap[s[r]] + 1); // directly come to next idx after target ele,instead of using 2 pointer method (where the L pointer moves till r + 1 to remove the duplicate)
            } 
            // new char -> inc maxLen and add letter to umap
            umap[s[r]] = r;
            maxLen = max(maxLen, r - l + 1);
            r += 1;
        }
        return maxLen;
    }
