// Hari

// Short Solution

vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        // fast
        ios_base::sync_with_stdio(false);
        // check
        if(mat.size() == 0) return {};
        
        int rows = mat.size(), cols = mat[0].size();
        vector<int> res;
        int row = 0, col = 0;
        bool up = true;
        
        while(row <= rows && col <= cols){
            if(up){
                // go up
                while(row > 0 && col < cols-1){
                    // this will go upto "5" ele in diagram
                    res.push_back(mat[row][col]);
                    row -= 1; col += 1;                    
                }
                // this will add "3"
                res.push_back(mat[row][col]);
                if(col == cols-1) row += 1; // move down to "6"
                else col += 1;
            } else {
                // go down
                while(col > 0 && row < rows-1){
                    res.push_back(mat[row][col]);
                    row += 1; col -= 1;         
                }
                res.push_back(mat[row][col]);
                if(row == rows-1) col += 1; // move right
                else row += 1;
            }
            up = !up; // change direction
        }
        return res;
        
    }

// Detailed Solution

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        // manage base case of when matrix is empty
        if (matrix.size() == 0) return {};
        
        // variables for storing the last index for rows and columns
        int iIndex = matrix.size(), jIndex = matrix[0].size();
        // variables for storing the current index while traversing the matrix
        int i = 0, j = 0;
        // variable to check which direction we are moving
        bool isMovingUpRight = true;
        // variable for keep track of which elements in the result vector are populated
        int count = 1;
        // declare vector we will return at the end
        vector<int> result(iIndex * jIndex);
        
        // assign the first element in the result vector
        result[0] = matrix[i][j];
        
        // while we have not reach the end of the row and column (last index for both row and column)
        while (i != iIndex - 1 || j != jIndex - 1) {
            if (isMovingUpRight) { // if we are moving in the up-right direction...
                if (j == jIndex - 1) { // ...and we have hit the right end of the matrix, we will move down one position and switch direction
                    i++;
                    isMovingUpRight = false;
                } else if (i == 0) { // ...and we have hit the top the matrix, we will move right one position and switch direction
                    j++;
                    isMovingUpRight = false;
                } else { // ...else we have not hit the end of either side so we will move up and right one position
                    i--;
                    j++;
                }
            } else { // else we are moving in the bottom-left direction...
                if (i == iIndex - 1) { // ...and we have hit the bottom of the matrix, we will move right one position and switch direction
                    j++;
                    isMovingUpRight = true;
                } else if (j == 0) { // ...and we have hit the left end of the matrix, we will move down and switch direction
                    i++;
                    isMovingUpRight = true;
                } else { // ...else we have not hit the end of either side so we will move down and left one position
                    i++;
                    j--;
                }
            }
            
            result[count++] = matrix[i][j]; // after moving, we will assign the current element into the result vector
        }
        
        return result; // return final result after traversing the matrix
    }
};
