class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BAHDRE NARAYANA
    int largestMagicSquare(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        
        // rows presum
        vector<vector<int>> rowsum(m,vector<int>(n));
        for (int i=0;i<m;i++)
        {
            int sum=0;
            for (int j=0;j<n;j++)
            {
                sum+=grid[i][j];
                rowsum[i][j]=sum;
            }
        }
        // columns presum
        vector<vector<int>> colsum(m,vector<int>(n));
        for (int i=0;i<n;i++)
        {
            int sum=0;
            for (int j=0;j<m;j++)
            {
                sum+=grid[j][i];
                colsum[j][i]=sum;
            }
        }
        
        int ans=min(m,n);
        // as soon as we get the ans satisfying conditions of magic matrix
        // we return ans else finally default ans 1.
        for (;ans>=2;ans--)
        {
            for (int i=0;i+ans-1<m;i++)
            {
                for (int j=0;j+ans-1<n;j++)
                {
                    // d1 diagonal1 sum and d2=diagonal sum
                    int d1=0,d2=0,temp=ans;
                    int a=i,b=j,c=j+ans-1;
                    while (temp--)
                    {
                        d1+=grid[a][b++];
                        d2+=grid[a++][c--];
                    }
                    // taking d1 as the constant sum for magic square of size ans.
                    int sum=d1;
                    if (sum!=d1 || sum!=d2)
                    {
                        continue;
                    }
                    // cheking if every rowsum is equal to sum
                    bool flag=true;
                    for (int a=i;a<=i+ans-1;a++)
                    {
                        temp=j?rowsum[a][j+ans-1]-rowsum[a][j-1]:rowsum[a][j+ans-1];
                        if (temp!=sum)
                        {
                            flag=false;
                            break;
                        }
                    }
                    if (!flag)
                        continue;
                    // cheking if every colsum is equal to sum
                    for (int a=j;a<=j+ans-1;a++)
                    {
                        temp=i?colsum[i+ans-1][a]-colsum[i-1][a]:colsum[i+ans-1][a];
                        if (temp!=sum)
                        {
                            flag=false;
                            break;
                        }
                    }
                    if (!flag)
                        break;
                    else // if we got all right upto now then return it 
                        return ans; // this is the largest possible side k
                }
            }
        }
        return 1;
    }
};
