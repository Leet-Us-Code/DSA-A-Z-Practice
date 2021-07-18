class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    string ans;
    string add(string s, int a)
    {
        string res;
        for(int i = 0; i < s.length(); i++)
        {
            if(i%2 != 0)
            {
                char ch = (char)(((s[i] - '0' + a)%10) + '0');
                res.push_back(ch);
            }
            else
                res.push_back(s[i]);
        }
        return res;
    }
    string rotate(string s, int b)
    {
        int n = s.length();
        string s1 = s.substr(0, n-b);
        string s2 = s.substr(n-b);
        string res = s2 + s1;
        return res;
    }
    void dfs(string s, int a, int b, set<string> &st)
    {
        if(st.find(s) != st.end())
            return;
        st.insert(s);
        ans = min(ans, s);
        string s1 = add(s, a);
        string s2 = rotate(s, b);
        dfs(s1, a, b, st);
        dfs(s2, a, b, st);
    }
    string findLexSmallestString(string s, int a, int b) {
        ans = s;
        set<string> st;
        dfs(s, a, b, st);
        return ans;
    }
};
