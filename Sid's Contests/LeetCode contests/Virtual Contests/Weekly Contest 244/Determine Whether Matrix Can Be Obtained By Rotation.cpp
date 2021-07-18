class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    vector<vector<int>> rotateMatrix(vector<vector<int>> grid)
    {
        vector<vector<int>> res;
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0; i < n; i++)
        {
            vector<int> temp;
            for(int j = 0; j < m; j++)
                temp.push_back(grid[j][i]);
            reverse(temp.begin(), temp.end());
            res.push_back(temp);
        }
        return res;
    }
    void printMatrix(vector<vector<int>> res)
    {
        for(int i = 0; i < res.size(); i++)
        {
            for(int j = 0; j < res[0].size(); j++)
                cout << res[i][j] << " ";
            cout << endl;
        }
    }
    bool isEqual(vector<vector<int>> mat1, vector<vector<int>> mat2)
    {
        if(mat1.size() != mat2.size())
            return false;
        for(int i = 0; i < mat1.size(); i++)
        {
            for(int j = 0; j < mat1[0].size(); j++)
            {
                if(mat1[i][j] != mat2[i][j])
                    return false;
            }
        }
        return true;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        vector<vector<int>> mat1 = rotateMatrix(mat);
        vector<vector<int>> mat2 = rotateMatrix(mat1);
        vector<vector<int>> mat3 = rotateMatrix(mat2);
        vector<vector<int>> mat4 = rotateMatrix(mat3);
        bool flag1 = isEqual(mat1, target);
        bool flag2 = isEqual(mat2, target);
        bool flag3 = isEqual(mat3, target);
        bool flag4 = isEqual(mat4, target);
        bool flag5 = isEqual(mat, target);
        if(flag1 || flag2 || flag3 || flag4 || flag5)
            return true;
        return false;
    }
};
