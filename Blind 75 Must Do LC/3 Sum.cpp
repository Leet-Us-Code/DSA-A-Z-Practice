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

// Hari

vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        set<vector<int>> uSet;
        int N = nums.size();
        
        if(N < 3) return res;
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i<N-2; i++){
            int l = i+1;
            int r = N-1;
            while(l < r){
                if(nums[i] + nums[l] + nums[r] < 0) l+=1;
                else if(nums[i] + nums[l] + nums[r] > 0) r -= 1;
                else {
                    // sum is zero
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l++]);
                    temp.push_back(nums[r--]);
                    uSet.insert(temp);
                }
            }
            while(i < N-1 && nums[i] == nums[i+1]) i+=1;
        }
        
        for(auto it: uSet){
            res.push_back(it);
        }
        return res;
        
        
    }
