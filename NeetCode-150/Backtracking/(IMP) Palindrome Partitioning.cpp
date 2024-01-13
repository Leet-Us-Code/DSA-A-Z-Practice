// Hari

class Solution {
public:
    vector<vector<string>> partition(string s) {
        // fast
        ios_base::sync_with_stdio(false);
        vector<vector<string>> res;
        vector<string> curr;
        helper(s, 0, res, curr);

        return res;
    }

    void helper(string s, int idx, vector<vector<string>>& res, vector<string>& curr) {
        // base
        if (idx == s.size()) {
            res.push_back(curr);
            return; 
        }

        // ind denotes starting point for every substring in curr. We only care about items to right of idx, and assume
        // that items to left of idx are already added (or skipped) from curr. 

        // i is used to partition string to left and right substrings. if left (ind to i) is a palindrome 
        // add left to curr and inc. i. If left is no more a palindrome, then backtrack -> inc. idx

        for (int i = idx; i < s.size(); i++) {
            if (isPalindrome(s, idx, i)) {
                curr.push_back(s.substr(idx, i - idx + 1)); 
                helper(s, i + 1, res, curr); 
                curr.pop_back();  
            } 
        }

    }

    bool isPalindrome(string s, int start, int end) {
        int i = start, j = end;
        if (i == j) return true; 
        while(i <= j) {
            if (s[i++] != s[j--]) {
                return false;
            }
        }

        return true; 
    }
};
