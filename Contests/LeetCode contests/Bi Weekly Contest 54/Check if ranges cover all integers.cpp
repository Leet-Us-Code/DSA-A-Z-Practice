class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        map<int, int> mp;
        for(int i = 0; i < ranges.size(); i++)
        {
            int start = ranges[i][0];
            int end = ranges[i][1];
            for(int j = start; j <= end; j++)
            {
                mp[j] = 1;
            }
        }
        for(int i = left; i <= right; i++)
        {
            if(mp[i] != 1)
                return false;
        }
        return true;
    }
};
