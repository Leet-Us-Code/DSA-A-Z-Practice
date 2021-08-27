// Hari

// Method - 1 (Using hashmap)

bool isSubsequence(string s, string t) {
        //fast
        ios_base::sync_with_stdio(false);
        // add t's elements in hash
        unordered_map<char, vector<int>> umap; // vector has list of indices of that char
        for(int i = 0; i<t.size(); i++){
            umap[t[i]].push_back(i);
        }
        int prev = -1;
        
        for(int i = 0; i<s.size(); i++){
            // have to check if ele is there in t, and relative ordering is valid
            auto it = umap.find(s[i]);
            if(it != umap.end()){
                auto idxVec = it->second;
                int pos = upper_bound(idxVec.begin(), idxVec.end(), prev) - idxVec.begin();
                // find pos of char "it" which is in front of "prev" (the prev "it" s position) 
                if(pos == idxVec.size()) return false;
                prev = idxVec[pos];
            }
            else return false;
        }
        return true;
    }

// Method - 2 (2 pointers) -> fastest of all 3

bool isSubsequence(string s, string t) {
        // fast
        ios_base::sync_with_stdio(false);
        int smallPtr = 0, bigPtr = 0; // small traverses s, and big traverses t
        
        while(bigPtr < t.size() && smallPtr < s.size()){
            if(s[smallPtr] == t[bigPtr]) smallPtr += 1;
            bigPtr += 1;
        }
        return smallPtr == s.size() ? 1:0;
    }


// Method - 3 (using DP)

bool isSubsequence(string s, string t) {
        // we compare the LCS of s and t, and if this LCS size is same as size of "s" -> true
        // Method - 3 (using DP)
        //fast
        ios_base::sync_with_stdio(false);
        int m = s.size(), n = t.size();
        
        int dp[m+1][n+1];
        // assign first row and col = 0
        // just do standard LCS 
        for(int i = 0; i<=n; i++) dp[0][i] = 0;
        for(int i = 0; i<=m; i++) dp[i][0] = 0;
        
        for(int i = 1; i<=m; i++){
            for(int j = 1; j<=n; j++){
                if(s[i-1] == t[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        return dp[m][n] == m? 1: 0;
        
    }

//Sid 

class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool isSubsequence(string s, string t) {
        int n = s.length();
        int m = t.length();
        int p1 = 0, p2 = 0;
        for(int i = 0; i < m; i++)
        {
            if(t[i] == s[p1])
                p1++;
        }
        if(p1 == n)
            return true;
        return false;
    }
};
