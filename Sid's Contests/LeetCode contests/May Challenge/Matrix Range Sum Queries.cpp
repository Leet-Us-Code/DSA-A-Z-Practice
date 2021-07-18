class NumMatrix {
public:
    int m[1000][1000];
    NumMatrix(vector<vector<int>>& matrix) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        for(int i = 0; i < matrix[0].size(); i++)
        {
            m[0][i] = matrix[0][i];
        }
        //col wise sum 
        for(int i = 1; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[i].size(); j++)
            {
                m[i][j] = matrix[i][j] + m[i-1][j];
            }
        }
        //row wise sum 
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 1; j < matrix[i].size(); j++)
            {
                m[i][j] = m[i][j] + m[i][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int x = m[row2][col2];
        if(row1 > 0)
        {
            x = x - m[row1-1][col2];
        }
        if(col1 > 0)
        {
            x = x - m[row2][col1-1];
        }
        if(row1 > 0 && col1 > 0)
        {
            x += m[row1-1][col1-1];
        }
        return x;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
