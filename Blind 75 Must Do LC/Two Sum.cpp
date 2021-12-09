// Hari

vector<int> twoSum(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        unordered_map<int, int> umap;
        vector<int> res;
        for(int i = 0; i<nums.size(); i++){
            auto it = umap.find(target - nums[i]);
            if(it != umap.end()){
                res.push_back(i);
                res.push_back(it->second);
            }
            else umap[nums[i]] = i;
        }
        return res;
    }

// Sid -> Java solution 
class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> a = new HashMap<Integer, Integer>();
        int n = nums.length;
        //inserting all the elements in  the map 
        for(int i = 0; i < n; i++)
        {
            a.put(nums[i], i);
        }
        int[] res = new int[2];
        for(int i = 0; i < n; i++)
        {
            int rem = target - nums[i];
            //check if the rem exists in the hashmap 
            Integer ind = a.get(rem);
            if(ind != null && ind != i)
            {
                res[0] = i; 
                res[1] = ind;
                break;
            }
        }
        return res;
    }
}
