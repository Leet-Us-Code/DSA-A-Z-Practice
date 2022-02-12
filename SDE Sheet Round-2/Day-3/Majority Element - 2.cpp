// Hari

vector<int> majorityElement(vector<int>& nums) {
        // Moore's voting algorithm. Continuation of Majority Elements - 1.
        // Here there can be max 2 majority ele, so we track both
        
        // fast
        ios_base::sync_with_stdio(false); 
        vector<int> res;
        int majorityEle1 = -1, count1 = 0, majorityEle2 = -1, count2 = 0;
        
        for(auto it: nums){
            // if currele == majorityEle1, inc count1
            if(it == majorityEle1) count1++;
            // similarly
            else if(it == majorityEle2) count2++;
            else if(count1 == 0){
                // replace majorityEle1
                majorityEle1 = it;
                count1 = 1; 
            }
            else if(count2 == 0){
                // replace majorityEle1
                majorityEle2 = it;
                count2 = 1; 
            }
            else {
                // decrease both count1 and count2
                count1--, count2--;
            }
        }
        
        // confirm if both are valid majorityElements
        int c1 = 0, c2 = 0;
        int N = nums.size();
        int threshold = N/3;
        
        for(auto it: nums){
            if(it == majorityEle1) c1++;
            else if(it == majorityEle2) c2++;
        }
        if(c1 > threshold) res.push_back(majorityEle1);
        if(c2 > threshold) res.push_back(majorityEle2);
        
        return res;
    }
