class Solution {
public:
    int util(int i,int j,vector<vector<int>>& M,vector<vector<bool>>& vis)
    {
        if(i<0||i>=M.size()||j<0||j>=M[0].size()||vis[i][j]||M[i][j]==0) return 0;
        
        vis[i][j]=true;
        int ans=M[i][j]+max({util(i+1,j,M,vis),util(i,j+1,M,vis),util(i-1,j,M,vis),util(i,j-1,M,vis)});
        vis[i][j]=false;
        return ans;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int ans=0;
        vector<vector<bool>> vis(grid.size(),vector<bool>(grid[0].size(),false));
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]!=0) ans=max(ans,util(i,j,grid,vis));
            }
        }
        return ans;
    }
};
