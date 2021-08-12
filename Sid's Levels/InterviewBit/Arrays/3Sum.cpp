class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            int l = i+1;
            int r = n-1;
            while(l < r)
            {
                if(nums[i] + nums[l] + nums[r] == 0)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    res.push_back(temp);
                    temp.clear();
                    while(l < r && nums[l] == nums[l+1])
                    l++;
                    while(r > l && nums[r] == nums[r-1])
                        r--;
                    l++;
                    r--;
                }
                else if(nums[i] + nums[l] + nums[r] > 0)
                    r--;
                else
                    l++;
            }
            while(i < n-1 && nums[i] == nums[i+1])
                i++;
        }
        return res;
    }
};
