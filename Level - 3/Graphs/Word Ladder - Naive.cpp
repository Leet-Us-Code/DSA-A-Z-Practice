class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    struct Node{
        string s;
        int d;
    };
    //O(n) -> n is length of string
    bool isValid(string s1, string s2)
    {
        if(s1.length() != s2.length())
            return false;
        int n = s1.length();
        int cntr = 0;
        for(int i = 0; i < n; i++)
        {
            if(s1[i] != s2[i])
                cntr++;
        }
        if(cntr == 1)
            return true;
        return false;
    }
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_map<string, bool> visited;
        Node start = {beginWord, 0};
        queue<Node> q;
        q.push(start);
        int n = wordList.size();
        visited[beginWord] = true;
        //O(length*length)
        while(!q.empty())
        {
            Node top = q.front();
            string ts = top.s;
            int td = top.d;
            if(ts == endWord)
            {
                return td+1;
            }
            q.pop();
            visited[ts] = true;
            string word = ts;
            for(int i = 0; i < n; i++)
            {
                if(!visited[wordList[i]])
                {
                    if(isValid(wordList[i], word))
                    {
                        Node temp = {wordList[i], td + 1};
                        q.push(temp);
                    }
                }
            }

        }
        return 0;
        //totally O(length*length*n) -> TLE
    }
};
