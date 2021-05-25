class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int rowFlag = 0;
        int colFlag = 0;
        for(int i = 0; i < matrix[0].size(); i++)
        {
            if(matrix[0][i] == 0)
            {
                rowFlag = 1;
                break;
            }
        }
        for(int i = 0; i < matrix.size(); i++)
        {
              if(matrix[i][0] == 0)
              {
                  colFlag = 1;
                  break;
              }
        }
        for(int i = 1; i < matrix.size(); i++)
        {
            for(int j = 1; j < matrix[i].size(); j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        for(int i = 1; i < matrix.size(); i++)
        {
            for(int j = 1; j < matrix[i].size(); j++)
            {
                if(matrix[0][j] == 0 || matrix[i][0] == 0)
                    matrix[i][j] = 0;
            }
        }
        if(rowFlag == 1)
        {
            for(int i = 0; i < matrix[0].size(); i++)
                matrix[0][i] = 0;
        }
        if(colFlag == 1)
        {
            for(int i = 0; i < matrix.size(); i++)
            {
                matrix[i][0] = 0;
            }
        }
    }
};
