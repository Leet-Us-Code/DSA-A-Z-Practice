class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void compute(vector<int> nums, vector<int> &nge)
    {
        int n = nums.size();
        stack<int> s;
        for(int i = 0; i < n; i++)
        {
            if(s.empty())
                s.push(i);
            while(!s.empty() && nums[i] > nums[s.top()])
            {
                nge[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty())
        {
            nge[s.top()] = n;
            s.pop();
        }
    }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        int n = nums.size();
        vector<int> nge(n);
        compute(nums, nge);
        int j = 0;
        for(int i = 0; i <= n-k; i++)
        {
            if(j < i)
                j = i;
            while(nge[j] < i+k)
            {
                j = nge[j];
            }
            res.push_back(nums[j]);
        }
        return res;
    }
};
