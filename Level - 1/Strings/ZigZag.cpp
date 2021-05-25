class Solution {
public:
    string convert(string s, int numRows) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        if(numRows == 1)
            return s;
        int n = s.length();
        string arr[10000];
        int row = 0;
        char dir = 'D';
        for(int i = 0; i < n; i++)
        {
            arr[row].push_back(s[i]);
            if(row == numRows - 1)
            {
                dir = 'U';
            }
            else if(row == 0)
            {
                dir = 'D';
            }
            if(dir == 'D')
                row++;
            else if(dir == 'U')
                row--;
        }
        string str;
        for(int i = 0; i < numRows; i++)
        {
            for(int j = 0; j < arr[i].length(); j++)
            {
                str.push_back(arr[i][j]);
            }
        }
        return str;
    }
};
