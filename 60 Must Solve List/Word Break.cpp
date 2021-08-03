// Hari

bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> uSet;
        for(auto it: wordDict) uSet.insert(it);
        int N = s.size();
        
        vector<bool> dp(N+1, false);
        dp[0] = true;
        
        for(int i = 1; i<=N; i++){
            for(int j = i-1; j>=0; j--){
                if(dp[j]){
                    string check = s.substr(j, i-j);
                    if(uSet.find(check) != uSet.end()){
                        dp[i] = true;
                        break; // next i
                    }
                }
            }
        }
        
        return dp[N];
        
    }
