//sid 
class Solution {
    public boolean isCorrectRow(char[][] board, int r){
        int n = board[0].length; 
        int[] freq = new int[10];
        for(int i = 0; i < n; i++){
            if(board[r][i]-'0' >= 0)
                freq[board[r][i] - '0']++;
        }
        for(int i = 0; i < 10; i++){
            if(freq[i] > 1)
                return false;
        }
        return true; 
    }

    public boolean isCorrectCol(char[][] board, int c){
        int m = board.length; 
        int[] freq = new int[10]; 

        for(int i = 0; i < m; i++){
            if(board[i][c]-'0' >= 0)
                freq[board[i][c]-'0']++; 
        }
        for(int i = 0; i < 10; i++){
            if(freq[i] > 1)
                return false;
        }
        return true; 
    }

    public boolean isCorrectSubMatrix(char[][] board, int r, int c){
        int m = board.length; 
        int n = board.length; 
        int[] freq = new int[10];
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(board[i+r][j+c]-'0' >= 0)
                    freq[board[i+r][j+c]-'0']++;
            }
        }
        for(int i = 0; i < 10; i++){
            if(freq[i] > 1)
                return false;
        }
        return true;
    }

    public boolean isValidSudoku(char[][] board) {
        int m = board.length; 
        int n = board[0].length; 

        for(int i = 0; i < m; i++){
            if(!isCorrectRow(board, i))
                return false;
        }

        for(int i = 0; i < n; i++){
            if(!isCorrectCol(board, i))
                return false;
        }

        for(int i = 0; i < 9; i+=3){
            for(int j = 0; j < 9; j += 3){
                if(!isCorrectSubMatrix(board, i, j))
                    return false;
            }
        }
        return true;
    }
}
