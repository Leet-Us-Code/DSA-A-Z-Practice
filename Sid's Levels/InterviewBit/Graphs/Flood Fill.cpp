class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int x[4] = {-1, 0, 1, 0};
    int y[4] = {0, 1, 0, -1};
    bool isSafe(int x, int y, vector<vector<int>> image, vector<vector<bool>> visited, int oldCol)
    {
        int m = image.size();
        int n = image[0].size();
        if(x < 0 || x >= m || y < 0 || y >= n || visited[x][y] || image[x][y] != oldCol)
            return false;
        return true;
    }
    void colorHelper(int sr, int sc, vector<vector<int>> &image, vector<vector<bool>> &visited, int oldCol, int newCol)
    {
        image[sr][sc] = newCol;
        visited[sr][sc] = true;
        for(int i = 0; i < 4; i++)
        {
            int newx = sr + x[i];
            int newy = sc + y[i];
            if(isSafe(newx, newy, image, visited, oldCol))
                colorHelper(newx, newy, image, visited, oldCol, newCol);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldCol = image[sr][sc];
        int m = image.size();
        int n = image[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        colorHelper(sr, sc, image, visited, oldCol, newColor);
        return image;
    }
};
