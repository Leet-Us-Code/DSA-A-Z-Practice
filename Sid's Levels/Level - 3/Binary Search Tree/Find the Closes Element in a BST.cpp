class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
    int minDiff(Node *root, int k)
    {
        //Your code here
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int closest;
        Node *cur = root;
        int minDif = INT_MAX;
        while(cur != NULL)
        {
            int dif = abs(cur->data - k);
            if(dif == 0)
            return 0; // this means that k is present in the tree 
            //if its not present keep on updating the min difference till now 
            if(minDif > dif)
            {
                minDif = dif;
                closest = cur->data;
            }
            //to go right or left 
            if(cur->data > k)
            {
                //this means the dif is more and we need to reduce it 
                cur = cur->left;
            }
            else
            {
                //this means the diiference is good enough andn there is a chance to reduce it 
                cur = cur->right;
            }
        }
        // return closest; -> if they asked to return the closest element
        return minDif;
    }
};
