class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int result = 0, i, j;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0; i < n; i++)
        {
            for(int j = 1; j < m; j++)
            {
                matrix[i][j] += matrix[i][j-1];
            }
        }
        map<int, int> mp;
        for(int col1 = 0; col1 < m; col1++)
        {
            for(int col2 = col1; col2 < m; col2++)
            {
                mp = {{0,1}};
                int sum = 0;
                for(int row = 0; row < n; row++)
                {
                    if(col1 > 0)
                    {
                        sum += matrix[row][col2] - matrix[row][col1-1];
                    }
                    else 
                    {
                        sum += matrix[row][col2];
                    }
                    if(mp.find(sum-target) != mp.end())
                    {
                        result += mp[sum-target];
                    }
                    mp[sum]++;
                }
            }
        }
        return result;
    }
};
