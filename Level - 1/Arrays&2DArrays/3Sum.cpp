class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        if(nums.size() < 3)
        {
            vector<vector<int>> res;
            return res;
        }
        vector<vector<int>> output;
        sort(nums.begin(), nums.end());
        set<vector<int>> remDup;
        for(int i = 0; i < nums.size() - 2; i++)
        {
            //removing duplicates
            while(i > 0 && i < nums.size() - 1 && nums[i] == nums[i-1])
                i++;
            int tar = 0 - nums[i];
            int l = i + 1;
            int r = nums.size() - 1;
            while(r > l)
            {
                
                if(nums[r] + nums[l] == tar)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    output.push_back(temp);
                    temp.clear();
                    //removing duplicates here also 
                    while(r > l && nums[l] == nums[l+1])
                        l++;
                    while(r > l && nums[r] == nums[r-1])
                        r--;
                    l++;
                    r--;
                }
                else if(nums[l] + nums[r] > tar)
                    r--;
                else 
                    l++;
            }
        }
        return output;
    }
};
