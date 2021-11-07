class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> a;
        vector<int> res;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            a.push_back(make_pair(nums[i], i));
        }
        sort(a.begin(), a.end());
        int l = 0, r = n-1;
        while(r > l)
        {
            if(a[l].first + a[r].first == target)
            {
                res.push_back(a[l].second);
                res.push_back(a[r].second);
                break;
            }
            else if(a[l].first + a[r].first > target)
                r--;
            else
                l++;
        }
        return res;
    }
};
