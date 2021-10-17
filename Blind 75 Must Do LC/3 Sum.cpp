//Sid
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        int l, r; 
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n-1; i++)
        {
            l = i+1;
            r = n-1;
            while(r > l)
            {
                if(nums[i] + nums[r] + nums[l] == 0)
                {
                    //eliminate duplicates 
                    while(l < n-1 && nums[l] == nums[l+1])
                        l++;
                    while(r > 0 && nums[r] == nums[r-1])
                        r--;
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    res.push_back(temp);
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
