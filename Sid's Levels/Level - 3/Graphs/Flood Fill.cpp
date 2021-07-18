class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    struct Node{
        int x; 
        int y;
    };
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    bool isSafe(int x, int y, vector<vector<int>> image)
    {
        int m = image.size(); 
        int n = image[0].size();
        if(x < 0 || x >= m || y < 0 || y >= n)
            return false;
        return true;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)     {
        int oldColor = image[sr][sc];
        queue<Node> q;
        Node start = {sr, sc};
        q.push(start);
        int m = image.size();
        int n = image[0].size();
        vector<vector<int>> visited(m, vector<int>(n, false));
        visited[sr][sc] = true;
        while(!q.empty())
        {
            Node node = q.front();
            q.pop();
            int x = node.x;
            int y = node.y;
            visited[x][y] = true;
            for(int i = 0; i < 4; i++)
            {
                int newx = x + dx[i];
                int newy = y + dy[i];
                if(isSafe(newx, newy, image) && !visited[newx][newy] && image[newx][newy] == oldColor)
                {
                    Node nn = {newx, newy};
                    q.push(nn);
                }
            }
        }
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(visited[i][j])
                    image[i][j] = newColor;
            }
        }
        return image;
    }
};
