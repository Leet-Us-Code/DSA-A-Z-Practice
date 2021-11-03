// Hari

string minWindow(string s, string t) {
        // fast
        ios_base::sync_with_stdio(false);
        // unordered map to store t's letters 
        unordered_map<char, int> umap;
        for(auto it: t) umap[it] += 1;
        
        int currCount = 0; // count # of letters in window that are in t
        int j = 0, minLen = INT_MAX, minStart = 0; 
        // 'j' will remove characters from window, and 'i' adds them
        
        for(int i = 0; i<s.size(); i++){
            if(umap[s[i]] > 0) currCount += 1; // valid char 
            // to ensure we don't add more of this letter than necesary
            umap[s[i]] -= 1; 
            if(currCount == t.size()){
                // we have a valid contiguous sequence. Now use 'j' and remove letters
                // which are either not in t, or occur more than their count in t
                while(j < i && umap[s[j]] < 0){
                    // if letter isn't in t, move ahead
                    umap[s[j]] += 1;
                    j += 1;
                }
                if(minLen > i-j) minStart = j, minLen = i-j+1;               
                
            }
           
            
        }
        
        return minLen == INT_MAX? "": s.substr(minStart, minLen);
    }
