class Solution {
  public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<vector<int>> arr(N, vector<int>(N));
        vector<int> temp;
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                temp.push_back(Mat[i][j]);
            }
        }
        sort(temp.begin(), temp.end());
        int ind = 0;
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                arr[i][j] = temp[ind++];
            }
        }
        return arr;
    }
};
