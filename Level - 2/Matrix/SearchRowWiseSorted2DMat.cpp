class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        for(int i = 0; i < matrix.size(); i++)
        {
            int l = 0;
            int r = matrix[i].size() - 1;
            while(r >= l)
            {
                int mid = (l + r)/2;
                if(matrix[i][mid] == target)
                    return true;
                else if(matrix[i][mid] > target)
                    r = mid - 1;
                else
                    l = mid + 1;
            }
        }
        return false;
    }
};
