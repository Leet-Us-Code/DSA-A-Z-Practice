class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    string simplifyPath(string path) {
        vector<string> x;
        int n = path.size();
        stack<string> s;
        for(int i = 0; i < n; i++)
        {
            string res;
            while(i < n && path[i] != '/')
            {
                res.push_back(path[i]);
                i++;
            }
            if(res == "." || res == "")
                continue;
            else if(res == "..")
            {
                if(!s.empty())
                    s.pop();
            }
            else
            {
                s.push(res);
            }
        }
        if(s.empty())
            return "/";
        else
        {
            vector<string> y;
            while(!s.empty())
            {
                y.push_back(s.top());
                s.pop();
            }
            reverse(y.begin(), y.end());
            // cout << y.size();
            // for(string str : y)
            //     cout << str << "";
            string result;
            for(string str : y)
            {
                result.push_back('/');
                for(char ch : str)
                {
                    result.push_back(ch);
                }
            }
            return result;
        }
        
    }
};
