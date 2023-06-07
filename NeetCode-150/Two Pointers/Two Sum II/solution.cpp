// Hari

vector<int> twoSum(vector<int>& numbers, int target) {
        ios_base::sync_with_stdio(false);
        vector<int> res;
        int i = 0, j = numbers.size()-1;
        
        while(i<j) {
            while (numbers[i] + numbers[j] > target) j--;
            while (numbers[i] + numbers[j] < target) i++;
            
            if (numbers[i] + numbers[j] == target) {
                res.push_back(i+1);
                res.push_back(j+1);
                break;
            }
        }
        
        return res;
        
    }
