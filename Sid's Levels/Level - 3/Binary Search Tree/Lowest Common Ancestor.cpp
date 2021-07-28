#include<bits/stdc++.h>
using namespace std;

class node {
public:
	int data;
	node*left;
	node*right;

	node(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
};
//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
bool nodeToRoot(node *root, int a, vector<node*> &path)
{
    if(root == NULL)
    return false;
    if(root->data == a)
    {
        path.push_back(root);
        return true;
    }
    bool findl = nodeToRoot(root->left, a, path);
    if(findl)
    {
        path.push_back(root);
        return true;
    }
    bool findr = nodeToRoot(root->right, a, path);
    if(findr)
    {
        path.push_back(root);
        return true;
    }
    return false;
}
node* lca(node*root, int a, int b){
    vector<node*> path1, path2;
    nodeToRoot(root, a, path1);
    nodeToRoot(root, b, path2);
    reverse(path1.begin(), path1.end());
    reverse(path2.begin(), path2.end());
    int i = 0, j = 0;
    while(i < path1.size() && j < path2.size())
    {
        if(path1[i] != path2[j])
        break;
        i++;
        j++;
    }
    return path1[i-1];
}
