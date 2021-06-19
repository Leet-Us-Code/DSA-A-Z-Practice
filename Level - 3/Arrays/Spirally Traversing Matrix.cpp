class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int m = matrix.size();
        int n = matrix[0].size();
        int k = 0, l = 0;
        vector<int> res;
        while(k < m && l < n)
        {
            for(int i = l; i < n; i++)
                res.push_back(matrix[k][i]);
            k++;
            for(int i = k; i < m; i++)
                res.push_back(matrix[i][n-1]);
            n--;
            if(k < m)
            {
                for(int i = n-1; i >= l; i--)
                    res.push_back(matrix[m-1][i]);
                m--;
            }
            if(l < n)
            {
                for(int i = m-1; i >= k; i--)
                    res.push_back(matrix[i][l]);
                l++;
            }
        }
        return res;
    }
};
