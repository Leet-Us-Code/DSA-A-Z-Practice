// Hari

bool isValid(string s) {
        // fast
        //ios_base::sync_with_stdio(false);
        stack<char> stk;
        int N = s.size();
        // sanity checks
        if(N % 2 != 0) return false; 
        
        for(auto it: s){
            if(it == '(' || it == '[' || it == '{') stk.push(it);
            else {
                // closing brackets
                if(it == ')' && !stk.empty() && stk.top() == '(') stk.pop();
                else if(it == ']' && !stk.empty() && stk.top() == '[') stk.pop();
                else if(it == '}' && !stk.empty() && stk.top() == '{') stk.pop();
                else return false;
            }
        }
        
        return stk.empty(); 
    }
