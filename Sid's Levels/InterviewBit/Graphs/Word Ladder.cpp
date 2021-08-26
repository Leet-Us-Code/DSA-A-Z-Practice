class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    struct node
    {
        string word; 
        int dist;
    };
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int n = wordList.size();
        unordered_map<string, bool> mp;
        unordered_set<string> dict(wordList.begin(), wordList.end());
        queue<node> q;
        q.push({beginWord, 0});
        mp[beginWord] = true;
        while(!q.empty())
        {
            string word = q.front().word;
            int dist = q.front().dist;
            q.pop();
            if(word == endWord)
                return dist + 1;
            for(int i = 0; i < word.size(); i++)
            {
                char x = word[i];
                for(int j = 0; j < 26; j++)
                {
                    char ch = j + 'a';
                    word[i] = ch;
                    if(!mp[word] && dict.find(word) != dict.end())
                    {
                        mp[word] = true;
                        q.push({word, dist+1});
                    }
                }
                word[i] = x;
            }
        }
        return 0;
    }
};
