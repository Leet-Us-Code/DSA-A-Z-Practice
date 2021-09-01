class Solution{   
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here 
        int maxEle = INT_MIN, minEle = INT_MAX;
        for(int i = 0; i < r; i++)
        minEle = min(minEle, matrix[i][0]);
        for(int i = 0; i < r; i++)
        maxEle = max(maxEle, matrix[i][c-1]);
        int dezired = (r*c + 1)/2;
        while(minEle < maxEle)
        {
            int mid = (maxEle + minEle)/2;
            int cntr = 0;
            for(int i = 0; i < r; i++)
            {
                cntr += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            }
            if(cntr < dezired)
            minEle = mid + 1;
            else 
            maxEle = mid;
        }
        return minEle;
    }
};
