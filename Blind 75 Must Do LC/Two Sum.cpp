// Hari

// Method - 1 (Unordered map)
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

// Method - 2 (2 pointer)
vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> vec;
        vector<int> res;
        for(int i = 0; i<nums.size(); i++){
            vec.push_back(make_pair(nums[i], i));
        }
        sort(vec.begin(), vec.end());
        int p1 = 0, p2 = vec.size()-1;
        while(p1 < p2){
            if(vec[p1].first + vec[p2].first == target){
                res.push_back(vec[p1].second);
                res.push_back(vec[p2].second);
                return res;
            }
            else if(vec[p1].first + vec[p2].first < target){
                p1++;
            }
            else p2--;
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

//Sid -> java 2 pointer approach 
//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
class Pair{
    int ind;
    int num;
    Pair(int num, int ind)
    {
        this.ind = ind; 
        this.num = num;
    }
}
class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        Pair[] arr = new Pair[n];
        for(int i = 0; i < n; i++)
        {
            arr[i] = new Pair(nums[i], i);
        }
        Arrays.sort(arr, new Comparator<Pair>(){
            @Override
            public int compare(Pair p1, Pair p2)
            {
                //it must be sorted based on nums[i] value in ascending order 
                return p1.num - p2.num;
            }
        });
        int l = 0, r = n-1;
        int[] res = new int[2];
        while(r > l)
        {
            if(arr[r].num + arr[l].num == target)
            {
                res[0] = arr[l].ind; 
                res[1] = arr[r].ind;
                break;
            }
            else if(arr[r].num + arr[l].num > target)
                r--;
            else
                l++;
        }
        return res;
    }
}
