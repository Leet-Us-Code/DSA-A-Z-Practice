class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        
        vector<int> res;
        vector<pair<int,int>> num;
        for(int i = 0; i < nums.size(); i++)
        {
            num.push_back(make_pair(nums[i],i));
        }
        sort(num.begin(),num.end());
        int l = 0;
        int r = num.size() - 1;
        while(r > l)
        {
            if(num[r].first + num[l].first == target)
            {
                res.push_back(num[l].second);
                res.push_back(num[r].second);
                break;
            }
            else if(num[r].first + num[l].first > target)
            {
                r--;
            }
            else
                l++;
        }
        return res;
    }
};
