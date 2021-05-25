class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int k = 0, l = 0;
        vector<int> res;
        while(k < r && l < c)
        {
            for(int i = l; i < c; i++)
            res.push_back(matrix[k][i]);
            k++;
            for(int i = k; i < r; i++)
            res.push_back(matrix[i][c-1]);
            c--;
            if(k < r) // print the row  -> check for the row
            {
                for(int i = c-1; i >= l; i--)
                res.push_back(matrix[r-1][i]);
                r--;
            }
            if(l < c) // print the coloumn -> check if the column exists
            {
                for(int i = r-1; i >= k; i--)
                {
                    res.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        return res;
    }
};
