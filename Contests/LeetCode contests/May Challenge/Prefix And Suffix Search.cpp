class Node 
{
    public: 
    vector<Node*> children;
    vector<int> ind;
    Node()
    {
        children = vector<Node*>(26, NULL);
    }
};
class Trie 
{
    public: 
    Node *root;
    Trie()
    {
        root = new Node();
    }
    void insert(string s, int itr)
    {
        root->ind.push_back(itr);
        Node *cur = root;
        for(int i = 0; i < s.length(); i++)
        {
            int index = s[i] - 'a';
            if(!cur->children[index])
                cur->children[index] = new Node();
            cur = cur->children[index];
            cur->ind.push_back(itr);
        }
    }
    vector<int> findPrefix(string s)
    {
        Node *cur = root;
        for(int i = 0; i < s.length(); i++)
        {
            int index = s[i] - 'a';
            cur = cur->children[index];
            if(!cur)
            {
                vector<int> temp;
                return temp;
            }
        }
        return cur->ind;
    }
};
class WordFilter {
public:
    Trie *fTrie, *rTrie;
    WordFilter(vector<string>& words) {
        fTrie = new Trie();
        rTrie = new Trie();
        for(int i = 0; i < words.size(); i++)
        {
            string normal = words[i];
            reverse(words[i].begin(), words[i].end());
            string reversed = words[i];
            fTrie->insert(normal, i);
            rTrie->insert(reversed, i);
        }
    }
    
    int f(string prefix, string suffix) {
        vector<int> v1 = fTrie->findPrefix(prefix);
        reverse(suffix.begin(), suffix.end());
        vector<int> v2 = rTrie->findPrefix(suffix);
        int ptr1 = v1.size() - 1, ptr2 = v2.size() - 1;
        while(ptr1 >= 0 && ptr2 >= 0)
        {
            if(v1[ptr1] == v2[ptr2])
            {
                return v1[ptr1];
            }
            else if(v1[ptr1] > v2[ptr2]) ptr1--;
            else ptr2--;
        }
        return -1;
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */
