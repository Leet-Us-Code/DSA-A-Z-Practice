class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        unordered_map<string, vector<string>> m;
        for(auto &s : paths)
        {
            int i = 0;
            while(s[i] != ' ')
                i++;
            string parent = s.substr(0, i); // parent folder 
            int j = i + 1; // j will be the at the starting of the file name
            int k = 0;
            for(; i < s.length(); i++)
            {
                if(s[i] == '(')
                {
                    k = i +  1; // k will be pointing to the starting of the content 
                }
                else if(s[i] == ')')
                {
                    //end of content
                    string path =  parent + "/" + s.substr(j, k-j-1);
                    string content = s.substr(k, i-k);
                    //if this content is not existing in map declare it 
                    if(m.find(content) == m.end())
                        m[content] = vector<string>();
                    m[content].push_back(path);
                    j = i + 2; //pointing to the start of next file (skipping current file and a blank)
                }
            }
            
        }
        vector<vector<string>> res;
        for(auto &s : m)
        {
            if(s.second.size() > 1)
            res.push_back(s.second);
        }
        return res;
    }
};
