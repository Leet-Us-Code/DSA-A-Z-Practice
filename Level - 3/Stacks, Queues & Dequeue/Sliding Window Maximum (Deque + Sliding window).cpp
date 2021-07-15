class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> d;
        vector<int> res;
        int n = nums.size();
        //process the first k elements
        int i;
        for(i = 0; i < k; i++)
        {
            while(!d.empty() && nums[i] > nums[d.back()])
                d.pop_back();
            d.push_back(i);
            
        }
        //front element is always the max in window of size k
        res.push_back(nums[d.front()]);
        //process the remaining elements
        for(; i < n; i++)
        {
            //check out of boundary 
            while(!d.empty() && d.front() <= i-k)
                d.pop_front();
            //check the greater than elements 
            while(!d.empty() && nums[i] > nums[d.back()])
                d.pop_back();
            d.push_back(i);
            //front element is always the max in window of size k
            res.push_back(nums[d.front()]);
        }
        return res;
    }
};
