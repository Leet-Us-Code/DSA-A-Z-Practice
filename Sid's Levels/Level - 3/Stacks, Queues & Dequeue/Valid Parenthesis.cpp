class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool isValid(string s) {
        stack<int> st;
        for(int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if(st.empty())
            {
                st.push(ch);
            }
            else if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(ch);
            }
            else
            {
                if(s[i] == ')' && st.top() == '(')
                    st.pop();
                else if(s[i] == ']' && st.top() == '[')
                    st.pop();
                else if(s[i] == '}' && st.top() == '{')
                    st.pop();
                else
                    return false;
            }
        }
        if(st.empty())
            return true;
        return false;
    }
};
