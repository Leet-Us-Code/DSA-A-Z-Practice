class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int l = 0;
        int r = matrix.size()*matrix[0].size() - 1;
        int m = matrix[0].size();
        while(l <= r)
        {
            int mid = (l + r)/2;
            if(matrix[mid/m][mid%m] == target)
                return true;
            else if(matrix[mid/m][mid%m] > target)
                r = mid - 1;
            else 
                l = mid + 1;
        }
        return false;
    }
};
