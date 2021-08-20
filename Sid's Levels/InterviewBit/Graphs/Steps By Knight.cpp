class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    struct move{
        int x; 
        int y;
        int dis;
    };
    bool isSafe(int r, int c, int n)
    {
        if(r < 0 || r >= n || c < 0 || c >= n)
        return false;
        return true;
    }
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int n)
	{
	    // Code here
	    int sr = KnightPos[0] - 1, sc = KnightPos[1] - 1;
	    int tr = TargetPos[0] - 1, tc = TargetPos[1] - 1;
	    int x[8] = {-2, -1, 1, 2, -2, -1, 1, 2};
        int y[8] = { -1, -2, -2, -1, 1, 2, 2, 1 };
	    bool visited[n][n];
	    for(int i = 0; i < n; i++)
	    {
	        for(int j = 0; j < n; j++)
	        {
	            visited[i][j] = false;
	        }
	    }
	    visited[sr][sc] = true;
	    queue<move> q;
	    q.push(move{sr, sc, 0});
	    while(!q.empty())
	    {
	        int curx = q.front().x;
	        int cury = q.front().y;
	        int dist = q.front().dis;
	        q.pop();
	        if(curx == tr && cury == tc )
	        return  dist;
	        for(int i = 0; i < 8; i++)
	        {
	            int nx = curx + x[i];
	            int ny = cury + y[i];
	            if(isSafe(nx, ny, n) && !visited[nx][ny])
	            {
	                visited[nx][ny] = true;
	                q.push(move{nx, ny, dist+1});
	            }
	        }
	    }
	    return -1;
	}
};
