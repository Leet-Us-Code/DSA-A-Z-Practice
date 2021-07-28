// Hari

class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        // fast io
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        
        // Put all words into set, and also check if endword exists. If not, return 0;
        unordered_set<string> myset;
        bool endWordPresent = false;
        
        for(auto it: wordList){
            if(endWord.compare(it) == 0) endWordPresent = true;
            myset.insert(it);
        }
        if(!endWordPresent) return 0;
        
    // now do bfs using Queue. Pick a word from Q, check every letter (a-z) at every index and see
        // if its endword. If not endword but present in set, then add to Q and remove it from set.
        // If this word == currword continue (replacing w in wall with same w is useless)
        
        queue<string> q;
        q.push(beginWord);
        int dfslvl = 0;
        
        while(!q.empty()){
            // first word is at first level. 
            dfslvl += 1; // When endWord found return lvl+1 to find no. of moves to reach endWord.
            int qSize = q.size(); // no of elements at each level
            
            while(qSize--){
                string currWord = q.front(); q.pop();
            
                for(int i = 0; i<currWord.size(); i++){
                    string temp = currWord;
                    for(char j = 'a'; j<='z'; j++){
                        temp[i] = j;
                        if(currWord.compare(temp) == 0) continue; // no use getting same word transform
                        if(temp.compare(endWord) == 0) return dfslvl+1; // found the end of sequence
                        if(myset.find(temp) != myset.end()){
                            // add temp to Q and remove from set
                            q.push(temp);
                            myset.erase(temp);
                        }
                    }
                }
            }
            
        }
        return 0; 
        
    }
};
