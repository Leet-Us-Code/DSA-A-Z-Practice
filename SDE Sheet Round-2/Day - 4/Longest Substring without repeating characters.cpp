// Hari

// Method - 1 (slower)

int lengthOfLongestSubstring(string s) {
        // fast
        ios_base::sync_with_stdio(false);
        unordered_set<char> uSet;
        
        int lo = 0, hi = 0, res = 0, N = s.size();
        // res is the length of the final longest substring
        while(lo < N && hi < N){
            // check if char doesn't exists in set
            if(uSet.find(s[hi]) == uSet.end()){
                uSet.insert(s[hi]);
                res = max(res, hi-lo+1);
                hi++;
            }
            // if found in set
            else {
                // update lo
                uSet.erase(s[lo]);
                lo++;
            }
        }
        
        return res;
    }

// Method - 2 (faster)

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
