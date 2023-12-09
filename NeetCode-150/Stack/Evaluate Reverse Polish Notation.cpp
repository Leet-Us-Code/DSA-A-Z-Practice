// Hari

int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for(auto it: tokens) {
            if (it != "+" && it != "-" && it != "*" && it != "/") {
                // Digit / Operand
                st.push(stoi(it));
            } else {
                // Operator
                int val2 = st.top(); st.pop();
                int val1 = st.top(); st.pop();
                
                if (it == "+") st.push(val1 + val2);
                else if (it == "-") st.push(val1 - val2);
                else if (it == "*") st.push(val1 * val2);
                else st.push(val1 / val2);
            }
        }
        
        return st.top();
    }
