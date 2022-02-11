// Hari

// Method - 1 [Freq Array]

int findDuplicate(vector<int>& nums) {
        // fast
        ios_base::sync_with_stdio(false); 
        int N = nums.size();
        vector<int> freqArr(N+1, 0);
        
        for(int i = 0; i<N; i++){
            if(freqArr[nums[i]] == 0) freqArr[nums[i]]++;
            else return nums[i];
        }
        return 0;
    }

// Method - 2 [HashMap]

int findDuplicate(vector<int>& nums) {
        map<int,int> freq;
        for(auto it : nums) freq[it]++;
        
        map<int,int>::iterator itr;
        for(itr = freq.begin(); itr != freq.end(); itr++){
            if(itr->second > 1) return itr->first;
        }
        
        return -1;
    }

// Method - 3 [Best - Floyd cycle method]

int findDuplicate(vector<int>& nums) {
        // Floyd Linked List Cycle Method
        // fast
        ios_base::sync_with_stdio(false); 
        int fast = nums[0], slow = nums[0];
        // since there is duplicate no., when making a linked-list for the nos, there is bound to be cycle. 
        // We find the start point of cycle using hare-tortoise method, which is ultimately the duplicate element. 
        
        do{
            fast = nums[nums[fast]];
            slow = nums[slow];
        }while (fast != slow);
            
        // slow = fast is reached
        fast = nums[0]; // reinit either fast or slow
        while(slow != fast){
            // both move slow
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
