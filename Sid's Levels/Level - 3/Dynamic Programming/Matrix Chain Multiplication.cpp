class Solution{
public:
    int matrixMultiplication(int n, int arr[])
    {
        // code here
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        //1 based indexed
        int mat[n][n]; // mat[i][j] => number of operations for arr[i]*arr[i+1]...arr[j] 
        //only 1 matrix means the number of operations will be zero 
        for(int i = 1; i < n; i++)
        {
            mat[i][i] = 0;
        }
        int res = INT_MIN;
        //L is the length 
        for(int l = 2; l < n; l++)
        {
            //starting index 
            for(int i = 1; i < n - l + 1; i++)
            {
                //ending index
                int j = i + l - 1;
                mat[i][j] = INT_MAX;
                for(int k = i; k < j; k++)
                {
                    //placing parenthesis in diff positions from start to end 
                    res = mat[i][k] + mat[k+1][j] + arr[i-1]*arr[k]*arr[j]; 
                    mat[i][j] = min(res, mat[i][j]);
                }
            }
        }
        return mat[1][n-1];
    }
};
