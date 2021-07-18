//Usage of dictionary for lookups 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    struct Node 
    {
        string s;
        int d;
    };
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        Node start = {beginWord, 0};
        queue<Node> q;
        q.push(start);
        unordered_map<string, bool> visited;
        visited[beginWord] = true;
        unordered_set<string> dict(wordList.begin(), wordList.end());
        while(!q.empty())
        {
            Node top = q.front();
            q.pop();
            string ts = top.s;
            int td = top.d;
            if(ts == endWord)
                return td + 1;
            string word = ts;
            for(int i = 0; i < word.size(); i++)
            {
                char x = word[i];
                for(int j = 0; j < 26; j++)
                {
                    char ch = j + 'a';
                    word[i] = ch;
                    if(!visited[word])
                    {
                        if(dict.find(word) != dict.end())
                        {
                            visited[word] = true;
                            Node temp = {word, td+1};
                            q.push(temp);
                        }
                    }
                }
                word[i] = x;
            }
        }
        return 0;
    }
};
