// Hari

vector<string> removeComments(vector<string>& source) {
        // fast
        ios_base::sync_with_stdio(false);
        vector<string> ans;
        string curr;
        bool isComment = false;
        for(int i = 0; i < source.size(); i++) {
            for(int j = 0; j < source[i].size(); j++) {
             // check if this is //  -> move to next sentence and ignore this one fully
        if(!isComment && j + 1 < source[i].size() && source[i][j] == '/' && source[i][j+1]=='/')                    break;
            //check if block comment is starting
            else if(!isComment && j + 1 < source[i].size() && source[i][j] == '/' && source[i][j+1]=='*') isComment = true, j++;
            // check if block comment is ending
            else if(isComment && j + 1 < source[i].size() && source[i][j] == '*' && source[i][j+1]=='/') isComment = false, j++;
            // if none of these and not comment also, then add it to curr string
                else if(!isComment ) curr.push_back(source[i][j]);
            }
            
            if(!isComment && curr.size()) ans.push_back(curr), curr.clear();
        }
        return ans;
    }
