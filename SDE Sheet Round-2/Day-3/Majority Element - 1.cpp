// Hari

// Problem - Majority Element (>N/2 times). Only 1 majority ele can exist, as all other elements cancel each other's frequency

int majorityElement(vector<int>& nums) {
        // fast
        ios_base::sync_with_stdio(false); 
        // Moore's voting algo - we pick an ele as majority ele, and inc it's count on every occurence. if a diff element is visited, decrease this count. 
        // when count == 0, then change majority ele to curr ele, and repeat above steps. Final remaining majority ele is the ans. 
        
        int count = 0, majorityEle = 0;
        for(auto it: nums){
            if(count == 0){
                majorityEle = it;
            }
            // if currEle same as majorityEle, inc count
            if(it == majorityEle) count++;
            // if they don't match, decrement
            else count--;
        }
        
        return majorityEle;
    }
