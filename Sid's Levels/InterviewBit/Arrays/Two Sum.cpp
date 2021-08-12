class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        vector<pair<int, int> > x;
        for(int i = 0; i < nums.size(); i++)
        {
            x.push_back(make_pair(nums[i], i));
        }
        sort(x.begin(), x.end());
        int l = 0, r = x.size() - 1;
        while(l <= r)
        {
            if(x[l].first + x[r].first == target)
            {
                res.push_back(x[l].second);
                res.push_back(x[r].second);
                break;
            }
            else if(x[l].first + x[r].first > target)
                r--;
            else
                l++;
        }
        return res;
    }
};
