// Hari

bool isValid(string s) {
        stack<char> st;
        vector<char> open {'(', '{', '['};
        vector<char> close {')', '}', ']'};
        bool isValid = true; 
        
        for(auto it: s) {
            if (find(open.begin(), open.end(), it) != open.end()) {
                // Curr element is an open brace
                st.emplace(it);
            } else {
                // Curr element is a close brace
                // Guaranteed to exist. No need to check existence. 
                auto currClose = find(close.begin(), close.end(), it);
                int idx = currClose - close.begin();
                
                // If stack is already empty or brackets don't match -> invalid
                if (st.empty() || st.top() != open[idx]) {
                    isValid = false;
                    break;
                } else {
                    // If braces match, pop the open brace in stack 
                    st.pop();
                }
            }
        }
        
        // If stack is empty -> valid 
        return st.empty() && isValid; 
    }
