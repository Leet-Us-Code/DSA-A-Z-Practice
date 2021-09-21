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
        for(int i = 0; i < n-1; i++)
        {
            int l = i+1, r = n-1, tar = 0-nums[i];
            while(r > l)
            {
                if(nums[l] + nums[r] == tar)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    res.push_back(temp);
                    while(l < n-1 && nums[l] == nums[l+1])
                        l++;
                    while(r > 1 && nums[r] == nums[r-1])
                        r--;
                    l++;
                    r--;
                }
                else if(nums[l] + nums[r] > tar)
                    r--;
                else
                    l++;
            }
            while(i < n-2 && nums[i] == nums[i+1])
                i++;
        }
        return res;
        
    }
};
