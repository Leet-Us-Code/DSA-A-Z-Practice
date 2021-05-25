class Solution {
public:
    bool isValid(string s) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int n = s.length();
        stack<char> x;
        for(int i = 0; i < n; i++)
        {
            if(x.empty())
            {
                x.push(s[i]);
            }
            else 
            {
                if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                {
                    x.push(s[i]);
                }
                else 
                {
                    if(s[i] == ')' && x.top() == '(')
                        x.pop();
                    else if(s[i] == '}' && x.top() == '{')
                        x.pop();
                    else if(s[i] == ']' && x.top() == '[')
                        x.pop();
                    else 
                        x.push(s[i]);
                }
            }
        }
        if(x.empty())
            return true;
        else
            return false;
    }
};
