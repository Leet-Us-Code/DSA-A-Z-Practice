// Hari

bool checkInclusion(string s1, string s2) {
        // fast
        ios_base::sync_with_stdio(false);
        
        int N1 = s1.size(), N2 = s2.size();
        int lo = 0, hi = lo + N1 - 1; // we only care about windows in s2 with same size as s1 
        
        // find frequency of all chars in s1
        vector<int> freqArr(26, 0); // as only lowercase letter allowed 
        for(auto it: s1) {
            freqArr[it - 'a'] += 1;
        }
        
        // traverse s2 in sliding window manner 
        while(hi < N2) {
            bool isWindowValid = true;
            // we will have new lo & hi each iteration here 
            vector<int> temp = freqArr; // freq. counter for current window 
            for(int k = lo; k <= hi; k++) {
                temp[s2[k] - 'a'] -= 1;
                // we don't care if temp has -ve numbers. If temp is not 0 fully, move on. 
            }
            
            // checking
            for(auto it: temp) {
                if (it != 0) {
                    // not right window. 
                    isWindowValid = false;
                    break;
                }
            }
            
            if (isWindowValid) {
                return true; 
            } else {
                lo += 1;
                hi += 1;
            }
        }
        
        return false; 
    }
