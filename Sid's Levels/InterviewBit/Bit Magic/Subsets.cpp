class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int num = pow(2, n);
        vector<vector<int>> temp;
        for(int i = 0; i < num; i++)
        {
            vector<int> res;
            for(int j = 0; j < n; j++)
            {
                if(i&(1<<j))
                    res.push_back(nums[j]);
            }
            temp.push_back(res);
        }
        return temp;
    }
};
