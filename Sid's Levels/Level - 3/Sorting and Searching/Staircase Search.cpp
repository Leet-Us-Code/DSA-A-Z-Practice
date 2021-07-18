class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int m = matrix.size(), n = matrix[0].size();
        int l = 0, r = n - 1;
        while(l < m && r >= 0)
        {
            if(matrix[l][r] == target)
                return true;
            else if(matrix[l][r] > target)
                r--;
            else
                l++;
        }
        return false;
    }
};
