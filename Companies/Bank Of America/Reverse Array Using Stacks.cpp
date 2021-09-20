// In the online test we were not allowed to use STL so stack had to be implemented using arrays 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void reverseString(vector<char>& s) {
        stack<char> st;
        int n = s.size();
        for(int i = 0; i < n; i++)
        {
            st.push(s[i]);
        }
        int ind = 0;
        while(!st.empty())
        {
            s[ind++] = st.top();
            st.pop();
        }
    }
};
