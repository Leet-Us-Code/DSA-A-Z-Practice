// Hari

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        // fast
        ios_base::sync_with_stdio(false);
        int rows = board.size(), cols = board[0].size(), wordIdx = 0; 
        if (rows == 0 || cols == 0 || word.size() == 0) return false; // no need, but still 

        // Choose starting point 
        for (int i = 0; i<rows; i++) {
            for(int j = 0; j<cols; j++) {
                if (board[i][j] == word[wordIdx]) {
                    // valid starting point 
                    vector<vector<bool>> visited(rows, vector<bool>(cols, false)); 
                    if (helper(board, word, visited, i, j, rows, cols, wordIdx)) return true; 
                }
            }
        }

        return false; 
    }

private:
    bool helper(vector<vector<char>>& board, string word, vector<vector<bool>>& visited, 
    int i, int j, int rows, int cols, int wordIdx) {
        // base
        if (wordIdx >= word.size()) return true; // word exists in board. 

        // boundaries 
        if (i < 0 || i >= rows || j < 0 || j >= cols || visited[i][j]) {
            // out of bounds 
            return false; 
        }

        if (word[wordIdx] == board[i][j]) {
            wordIdx++;
            visited[i][j] = true;  
            bool found = helper(board, word, visited, i - 1, j, rows, cols, wordIdx) || 
            helper(board, word, visited, i + 1, j, rows, cols, wordIdx) || 
            helper(board, word, visited, i, j - 1, rows, cols, wordIdx) || 
            helper(board, word, visited, i, j + 1, rows, cols, wordIdx); 
            
            // after coming back, mark it as not visited
            visited[i][j] = false; 
            return found; 
        } else {
            return false; 
        }
    }
};
