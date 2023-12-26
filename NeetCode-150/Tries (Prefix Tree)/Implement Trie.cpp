// Hari

struct Node {
    Node* links[26]; // all will be NULL in the beginning
    bool flag = false;

    // functions 
    bool containsLetter(char it) {
        return links[it - 'a'] != NULL; 
    }

    void putLetter(char it, Node* next) {
        // Add the reference node for curr letter 
        links[it - 'a'] = next;
    }

    Node* get(char it) {
        return links[it - 'a'];     
    }
};

class Trie {
private: 
    Node* root;

public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        // Start from root 
        Node* curr = root;

        // Traverse word, check if a letter exists in curr and points to another node containing 
        // next letter. If not, create them. 
        for (auto it: word) {
            if (!curr->containsLetter(it)) {
                // Letter not in trie
                curr->putLetter(it, new Node());
            } 
            curr = curr->get(it); // move to next node 
        }

        // once the word is added, we will be at a trie node where no letter needs to be added. 
        // mark flag = true for this null / empty node so that we can say addition of curr word is completed 
        curr->flag = true; 
    }
    
    bool search(string word) {
        // Start from root 
        Node* curr = root;
        for(auto it: word) {
            if (curr->containsLetter(it)) {
                curr = curr->get(it);
            } else {
                return false;
            }
        }

        // check if last curr node we are at contains flag = true. Then we know that word is traversed
        return curr->flag == true;
    }
    
    bool startsWith(string prefix) {
        // Start from root 
        Node* curr = root;
        for(auto it: prefix) {
            if (curr->containsLetter(it)) {
                curr = curr->get(it);
            } else {
                // letter not present in node 
                return false;
            }
        }

        // if we have traversed atleast 1 node then prefix exists 
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
