// Hari

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        if(s.size() % 2 != 0) return false; // cant form one pair of brackets
        for(auto it: s){
            if(it == '(' || it == '{' || it == '[') stk.push(it);
            else {
                if(it == ')' && !stk.empty() && stk.top() == '(') stk.pop(); 
                else if(it == '}' && !stk.empty() && stk.top() == '{') stk.pop(); 
                else if(it == ']' && !stk.empty() && stk.top() == '[') stk.pop(); 
                else return false;
            }
        }
        
        return stk.empty();
    }
};
