class Solution{   
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here          
        int minEle = INT_MAX, maxEle = INT_MIN;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0; i < m; i++)
        {
            minEle = min(minEle, matrix[i][0]);
            maxEle = max(maxEle, matrix[i][n-1]);
        }
        int dez = (r*c + 1)/2;
        int ans = -1;
        while(minEle < maxEle)
        {
            int mid = (minEle + maxEle)/2;
            int pos = 0;
            for(int i = 0; i < m; i++)
            {
                pos += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            }
            if(pos < dez)
            {
                minEle = mid + 1;
            }
            else
            {
                maxEle = mid;
            }
        }
        return minEle;
    }
};
