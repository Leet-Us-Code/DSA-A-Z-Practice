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
            int tar = 0 - nums[i]; 
            int l = i+1, r = n - 1;
            while(r > l)
            {
                if(nums[r] + nums[l] ==  tar)
                {
                    //eliminate duplicates 
                    while(r > 0 && nums[r] == nums[r-1])
                        r--;
                    while(l < n-1 && nums[l] == nums[l+1])
                        l++;
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    res.push_back(temp);
                    l++;
                    r--;
                }
                else if(nums[r] + nums[l] > tar)
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
