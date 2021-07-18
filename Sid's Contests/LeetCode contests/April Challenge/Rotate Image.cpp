class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j <= i; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        //reverse each  row 
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < (matrix[i].size()/2); j++)
            {
                int x = matrix[i].size();
                swap(matrix[i][j], matrix[i][x-j-1]);
            }
        }
    }
};
