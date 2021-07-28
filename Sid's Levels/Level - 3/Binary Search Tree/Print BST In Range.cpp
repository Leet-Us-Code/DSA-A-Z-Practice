class Solution {
  public:
  //OM GAN GANAPATHAYE NAMO NAMAH 
  //JAI SHRI RAM 
  //JAI BAJRANGBALI 
  //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
  void printInRange(Node *root, int low, int high, vector<int> &res)
  {
      if(root == NULL)
      return;
      if(root->data >= low && root->data <= high)
      {
          printInRange(root->left, low, high, res);
          res.push_back(root->data);
          printInRange(root->right, low, high, res);
      }
      else if(root->data > low)
      {
          printInRange(root->left, low, high, res);
      }
      else
      {
          printInRange(root->right, low, high, res);
      }
  }
    vector<int> printNearNodes(Node *root, int low, int high) {
        //code here   
        vector<int> res;
        printInRange(root, low, high, res);
        return res;
    }
};
