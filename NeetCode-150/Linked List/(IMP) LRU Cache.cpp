// Hari

class LRUCache {
public:
// Uses Hashmap and Doubly Linked List 
    class DLLNode {
        public: 
            int key;
            int val;
            DLLNode* prev;
            DLLNode* next;

            DLLNode(int _key, int _val) {
                key = _key;
                val = _val;
            }
    };

    DLLNode* head = new DLLNode(-1, -1);
    DLLNode* tail = new DLLNode(-1, -1);

    int maxCap = 0;
    unordered_map<int, DLLNode*> umap; // storing map for easy access to node's key and val

    LRUCache(int capacity) {
        maxCap = capacity;
        head->next = tail;
        tail->prev = head;
    }

    // Add a node to start of DLL (after head)
    void addNodeToDLL(DLLNode* newNode) {
        DLLNode* temp = head->next;
        newNode->prev = head;
        newNode->next = temp;
        head->next = newNode;
        temp->prev = newNode;
    }

    void deleteNodeFromDLL(DLLNode* delNode) {
        DLLNode* delPrev = delNode->prev;
        DLLNode* delNext = delNode->next;
        umap.erase(delNode->key);
        delPrev->next = delNext;
        delNext->prev = delPrev;
    }
    
    int get(int key) {
        int res = -1;
        if (umap.find(key) != umap.end()) {
            // Delete node and re-add it to start of DLL
            DLLNode* nodeToDelete = umap[key];
            res = nodeToDelete->val; 

            // delete from umap
            umap.erase(key);

            // Update LRUCache by removing this node and adding it back to DLList 
            // but in latest position as it was most recently used
            // LRUCache: head<->...<most freq to least freq nodes>...<->tail
            deleteNodeFromDLL(nodeToDelete);
            addNodeToDLL(nodeToDelete);

            // Update umap
            umap[key] = head->next; 
        } 

        return res;
    }
    
    void put(int key, int value) {
        if (umap.find(key) != umap.end()) {
            // Update old node by deleting it and ading new one 
            DLLNode* existingNode = umap[key]; 
            DLLNode* newNode = new DLLNode(key, value);
            umap.erase(key);
            deleteNodeFromDLL(existingNode);
            addNodeToDLL(newNode);
            umap[key] = head->next;
        } else {
            // Add a new node
            // check if capacity exists first 
            if (umap.size() == maxCap) {
                // delete the LRU i.e. node before tail 
                DLLNode* delNode = tail->prev;
                umap.erase(delNode->key);
                deleteNodeFromDLL(delNode);
            } 
            // Add node
            DLLNode* newNode = new DLLNode(key, value);
            addNodeToDLL(newNode);
            umap[key] = head->next;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
