// do this for strings -> in leetcode its avaialble only for vectors 
class Solution {
public:
    void generateAll(vector<int> nums, int ind, vector<vector<int>> &res, vector<int> &sub)
    {
        if(ind == nums.size())
        {
            res.push_back(sub);
            return;
        }
        else
        {
            generateAll(nums, ind+1, res, sub);
            sub.push_back(nums[ind]);
            generateAll(nums, ind+1, res, sub);
            sub.pop_back(); // backtracking
        }
    }
    static bool comp(vector<int> s1, vector<int> s2)
    {
        return s1.size() < s2.size();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> sub;
        generateAll(nums, 0, res, sub);
        sort(res.begin(), res.end(), comp);
        return res;
    }
};
