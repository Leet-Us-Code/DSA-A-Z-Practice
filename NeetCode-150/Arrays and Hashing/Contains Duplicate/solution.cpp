// Hari

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> mapper;
        
        for(int it: nums) {
            if(mapper.find(it) == mapper.end()) {
                mapper[it] = 1;
            } else {
                return true;
            }
        }
        return false;
    }
};
