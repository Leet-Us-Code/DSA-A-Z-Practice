// Hari

int minStartValue(vector<int>& nums) {
        // we find out the smallest sum possible from the elements -> revert its - to + sign and add 1 to it -> ensures large enough StartValue
        
        // fast
        ios_base::sync_with_stdio(false);
        int minSum = 0, currSum = 0;
        
        for(auto it: nums){
            currSum += it;
            if(currSum < minSum) minSum = currSum;
        }
        
        return -minSum + 1; // satisfies case when all nums are +ve -> return 1
    }
