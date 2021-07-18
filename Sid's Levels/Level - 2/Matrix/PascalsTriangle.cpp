class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<vector<int>> pascal;
        vector<int> temp;
        temp.push_back(1);
        pascal.push_back(temp);
        for(int i = 1; i < numRows; i++)
        {
            temp.clear();
            int size = i + 1;
            for(int j = 0; j < size; j++)
            {
                if(j == 0 || j == size - 1)
                    temp.push_back(1);
                else
                {
                    int x  = pascal[i-1][j] + pascal[i-1][j-1];
                    temp.push_back(x);
                }
            }
            pascal.push_back(temp);
        }
        return pascal;
    }
};
