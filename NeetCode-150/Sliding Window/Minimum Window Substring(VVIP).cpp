// Hari

string minWindow(string s, string t) {
        // fast
        ios_base::sync_with_stdio(false);
        
        int Ns = s.size(), Nt = t.size();
        unordered_map<char, int> umapT; // characters & their count
                
        // edge case
        if (t == "" || Ns < Nt) return ""; 
    
        // build T Hashmap
        for(auto it: t) 
            umapT[it] += 1;    
        
        int lo = 0, hi = 0, minLen = INT_MAX, resLo = 0, resHi = 0;
        unordered_map<char, int> umapS; 
        int haveCount = 0, needCount = umapT.size();
        bool foundValidSubstring = false;
        while(hi < Ns) {
            /**
            - elements of umapS which are in umapT - umapS count should be >= umapT count
            - if for an element umapS count = umapT count then only inc. haveCount by 1
            - if we have more than we need, no need to inc. 
            - count vars are on a character basis, not count of character basis
            - if we have same no. of occurences for a char btw 2 umaps, then only haveCount++
            */

            if (foundValidSubstring) {
                // Logic when we more lo forward 
                umapS[s[lo]] -= 1;
                
                // when we lose a char and freq becomes lower than needed - invalid substring 
                if (umapS[s[lo]] < umapT[s[lo]]) {
                    haveCount -= 1;
                    foundValidSubstring = false;
                } 
                
                // inc. lo and reduce window size until substring becomes invalid 
                lo += 1;
            } else {
                // Logic when we move hi forward 
                umapS[s[hi]] += 1;
                // we don't increment haveCount if we have more freq. than we need for a char 
                 if (umapS[s[hi]] == umapT[s[hi]]) haveCount += 1;
            }      
            
            // check if all chars of t are in current window
            // instead of traversing full map, we just compare count vars
            int windowLen = hi - lo + 1;
            if (haveCount == needCount) {
                foundValidSubstring = true;
                if (windowLen < minLen) {
                    resLo = lo;
                    resHi = hi;
                    minLen = windowLen;
                } 
            }
            
            // Inc. hi iff valid string not found 
            if (!foundValidSubstring)
                hi += 1;
        }
        
        if (minLen == INT_MAX) return "";
        // use resLo and resHi to make the string and return it
        string res = s.substr(resLo, minLen); 
        return res; 
    }
