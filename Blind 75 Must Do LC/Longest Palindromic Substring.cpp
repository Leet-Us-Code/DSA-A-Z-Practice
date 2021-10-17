// Hari

string longestPalindrome(string s) {
        int N = s.size();
        int maxLen = 1;
        int start = 0;
        
        // odd len palindromes
        for(int i = 0; i<N; i++){
            int left = i-1;
            int right = i+1;
            while(left >= 0 && right < N && s[left] == s[right]){
                if(right - left + 1 > maxLen){
                    start = left;
                    maxLen = right - left + 1;
                }
                left -= 1; right += 1;
            }
        }
        
        // even len palindromes
        for(int i = 0; i<N-1; i++){
            int left = i;
            int right = i+1;
            while(left >= 0 && right < N && s[left] == s[right]){
                if(right - left + 1 > maxLen){
                    start = left;
                    maxLen = right - left + 1;
                }
                left -= 1; right += 1;
            }
        }
        
        return s.substr(start, maxLen);
        
        
    }
