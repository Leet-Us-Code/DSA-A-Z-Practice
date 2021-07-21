// Hari

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> uset;
        vector<int> res;
        
        for(auto it: nums1) uset.insert(it);
        
        for(auto it: nums2){
            if(uset.find(it) != uset.end()){
                uset.erase(it);
                res.push_back(it);
            }
        }
        
        return res;
    }
};
