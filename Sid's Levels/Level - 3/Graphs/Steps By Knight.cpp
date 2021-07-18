class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    public:
    //Function to find out minimum steps Knight needs to reach target position.
    int xc[8] = {-2, -1, 1, 2, -2, -1, 1, 2};
    int yc[8] = { -1, -2, -2, -1, 1, 2, 2, 1 };
    struct Node{
        int x;
        int y;
        int steps;
    };
    bool isSafe(int x, int y, int n)
    {
        if(x <= 0 || x > n || y <= 0 || y > n)
        return false;
        return true;
    }
    int helper(int sr, int sc, int tr, int tc, int n, int &steps, bool visited[][1000])
    {
        if(!isSafe(sr, sc, n))
        return -1;
        if(sr == tr && sc == tc)
        return steps;
        queue<Node> q;
        Node st = {sr, sc, 0};
        q.push(st);
        visited[sr][sc] = true;
        while(!q.empty())
        {
            Node node = q.front();
            q.pop();
            int x = node.x;
            int y = node.y;
            visited[x][y] = true;
            int step = node.steps;
            if(x == tr && y == tc)
            return step;
            for(int i = 0; i < 8; i++)
            {
                if(isSafe(x+xc[i], y+yc[i], n) && !visited[x+xc[i]][y+yc[i]])
                {
                    Node temp = {x+xc[i], y+yc[i], step+1};
                    q.push(temp);
                }
            }
        }
        return -1;
    }
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    int sr = KnightPos[0];
	    int sc = KnightPos[1];
	    int tr = TargetPos[0];
	    int tc = TargetPos[1];
	    int steps = 0;
	    bool visited[1000][1000];
	    for(int i = 0; i < N+1; i++)
	    {
	        for(int j = 0; j < N+1; j++)
	        visited[i][j] = false;
	    }
	    return helper(sr, sc, tr, tc, N, steps, visited);
	    
	}
};
