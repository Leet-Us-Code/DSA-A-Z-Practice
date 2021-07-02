class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        sort(nums.begin(), nums.end());
        vector<int> freq;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            int cntr = 1;
            while(i < n-1 && nums[i] == nums[i+1])
            {
                cntr++;
                i++;
            }
            freq.push_back(cntr);
        }
        int m = freq.size();
        int j = m-1;
        int i = m-2;
        int sum = 0;
        while(i >= 0)
        {
            sum += freq[j];
            freq[i] = freq[i] + freq[j];
            i--;
            j--;
        }
        return sum;
    }
};
