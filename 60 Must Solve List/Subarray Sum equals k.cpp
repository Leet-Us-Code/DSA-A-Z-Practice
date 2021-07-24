// Hari

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // calculate prefix sum when traversing all elements in nums. 
        // If prefix sum val = K -> inc. count by 1
        // If prefix sum val - k gives a val which is present in prefix sum array (say at i th pos)
        // then the subarray from i+1 to curr is a valid subarray. Use map to check if ele exists
        
        // for fast I/O ops
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int N = nums.size(); 
        if(N == 0) return 0;
        
        int count = 0;
        int currSum = 0;
        unordered_map<int, int> umap; // val and count of times this val has come in prefix arr
               
        
        for(int i = 0; i < N; i++){
            currSum += nums[i]; // current prefix sum val 
            if(currSum == k) count++;
            
            int checkVal = currSum - k;
            if(umap.find(checkVal) != umap.end()) count += umap[checkVal];
            

            umap[currSum]++;
        }
        
        return count;
    }
};

/*

IMPORTANT 
If anyone is confused why the count was increased by myMap[ curr - k ] instead of just count+=1 . It was because prefix sum can be same because of some negative values in the array. so out next occuring k will also pair  with those negative values also . 


consider this case A : [3 4  7    2   -3   1   4   2   1 ]  
                       preSum : [3 7 14 16 13 14 18 20 21]


you can see 14 occured twice  because of the subsequence [2 -3 1] their sum is 0. so When you are at the final index with value 1 . you have curr - k = 21 - 7 = 14 . you check for 14 it has occured twice . so you need to consider subsequences [2 -3 1 4 2 1] and [4 2 1] . 

*/
