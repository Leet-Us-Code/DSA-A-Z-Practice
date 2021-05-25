//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;\
struct trieNode 
{
    struct trieNode* children[26];
    bool isEndOfWord;
};
struct trieNode *getNode(void)
{
    struct trieNode *pNode = new trieNode;
    pNode->isEndOfWord = false;
    for(int i = 0; i < 26; i++)
    {
        pNode->children[i] = NULL;
    }
    return pNode;
}
void insert(struct trieNode *root, string key)
{
    struct trieNode *pNode = root;
    for(int i = 0; i < key.length(); i++)
    {
        int ind = key[i] - 'a';
        if(!pNode->children[ind])
        pNode->children[ind] = getNode();
        pNode = pNode->children[ind];
    }
    pNode->isEndOfWord = true;
}
bool search(struct trieNode *root, string key)
{
    struct trieNode *pNode = root;
    for(int i = 0; i < key.length(); i++)
    {
        int ind = key[i] - 'a';
        if(!pNode->children[i])
        return false;
        pNode = pNode->children[ind];
    }
    if(pNode != NULL && pNode->isEndOfWord != false)
    return true;
    else
    return false;
}
int main()
{
    string keys[] = {"the", "a", "there", "answer", "any", "by", "bye", "their" }; 
    int n = sizeof(keys)/sizeof(keys[0]); 
  
    struct trieNode *root = getNode(); 
  
    for (int i = 0; i < n; i++) 
        insert(root, keys[i]); 
  
    search(root, "the")? cout << "Yes\n" : cout << "No\n"; 
    search(root, "these")? cout << "Yes\n" : cout << "No\n"; 
    return 0; 
}
