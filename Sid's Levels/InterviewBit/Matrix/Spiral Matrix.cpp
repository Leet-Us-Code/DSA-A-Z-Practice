class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int k = 0, l = 0;
        int m = matrix.size(), n = matrix[0].size();
        vector<int> res;
        while(k < n && l < m)
        {
            for(int i = k; i < n; i++)
                res.push_back(matrix[l][i]);
            l++;
            for(int i = l; i < m; i++)
                res.push_back(matrix[i][n-1]);
            n--;
            if(l < m)
            {
                for(int i = n-1; i >= k; i--)
                    res.push_back(matrix[m-1][i]);
                m--;
            }
            if(k < n)
            {
                for(int i = m-1; i >= l; i--)
                    res.push_back(matrix[i][k]);
                k++;
            }
        }
        return res;
    }
};
