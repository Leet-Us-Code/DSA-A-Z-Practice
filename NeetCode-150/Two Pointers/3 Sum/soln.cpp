// Hari

// -1 -1 0 1 2 4
    vector<vector<int>> threeSum(vector<int>& nums) {
        // fast
        ios_base::sync_with_stdio(false);
        vector<vector<int>> res;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i<nums.size(); i++){
            int j = i+1, k = nums.size()-1;
            while(j<k) {
                if(nums[i]+nums[j]+nums[k] == 0) {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    res.push_back(temp);
                    
                    // skip duplicate j values
                    while(j<nums.size()-1 && nums[j] == nums[j+1]) j++;
                    // skip duplicate k values
                    while(k>0 && nums[k] == nums[k-1]) k--;
                    
                    // if no duplicates, then traverse both j and k
                    j++;
                    k--;
                    
                } else if (nums[i]+nums[j]+nums[k] > 0) {
                    k--;
                } else {
                    j++;
                }
            }
            
            // skip duplicate nums[i] because if a triplet was formed with this nums[i]
            // using it again will cause duplicate. If it didn't form triplet before, it will
            // not form triplet now also 
            while(i<nums.size()-1 && nums[i] == nums[i+1]) i++;
        }
        
        return res;
    }
