class Solution {
public:
    int longestValidParentheses(string s) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int n = s.length();
        bool flag[1000000];
        for(int i = 0; i < n; i++)
        {
            flag[i] = false;
        }
        stack<int> st;
        for(int i = 0; i < n; i++)
        {
            if(st.empty())
            {
                st.push(i);
            }
            else 
            {
                if(s[i] == ')')
                {
                    int x = st.top();
                    if(s[x] == '(')
                    {
                        st.pop();
                    }
                    else 
                    {
                        st.push(i);
                    }
                }
                else 
                {
                    st.push(i);
                }
            }
        }
        st.push(n);
        int len = 0;
        if(st.empty())
            return n;
        while(st.size() > 1)
        {
            int x = st.top();
            st.pop();
            len = max(len, x - st.top() - 1);
        }
        len = max(len, st.top());
        return len;
    }
};
