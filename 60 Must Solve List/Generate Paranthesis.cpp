// Hari

void helper(vector<string> &res, string ans, int leftCount, int rightCount){
        // base
        if(leftCount == 0 && rightCount == 0){
            res.push_back(ans);
            return;
        }
        if(rightCount > 0) helper(res, ans+')', leftCount, rightCount-1);
        if(leftCount > 0) helper(res, ans+'(', leftCount-1, rightCount+1);
        
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string ans = "";
        int leftCount = n, rightCount = 0;
        helper(res, ans, leftCount, rightCount);
        return res;
    }
