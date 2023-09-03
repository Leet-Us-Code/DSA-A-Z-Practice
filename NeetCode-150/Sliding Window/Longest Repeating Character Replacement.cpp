int characterReplacement(string s, int k) {
        // fast
        ios_base::sync_with_stdio(false);
        vector<int> arr(26, 0);
        // if we moved low pointer in step X (invalid substring), we should not inc. freq of s[hi] as it remained in same place 
        bool isLowPointerMoved = false;
        
        int lo = 0, hi = 0, maxLen = 0, N = s.size();
        /**
        - size of substring  - most freq char in substring = char that needs to be replaced
        - and char that needs to be replaced should be <= k (allowed replacements) to be valid substring
        */
        while(hi < N) {
            if(!isLowPointerMoved)
                arr[s[hi] - 'A'] += 1;
            int maxFreqCharCount = *max_element(arr.begin(), arr.end());
            int sizeOfCurrSubstr = hi - lo + 1;
            if(sizeOfCurrSubstr - maxFreqCharCount <= k) {
                // valid substring
                maxLen = max(maxLen, sizeOfCurrSubstr);
                hi += 1;
                isLowPointerMoved = false;
            } else {
                // invalid substring. Move l pointer. 
                arr[s[lo] - 'A'] -= 1;
                lo += 1;
                isLowPointerMoved = true; 
            }
        }
        
        return maxLen;
    }
