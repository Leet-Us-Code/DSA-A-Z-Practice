class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        //first find the next greater element 
        int nge[100000];
        stack<int> s;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            if(s.empty())
            {
                s.push(i);
            }
            else 
            {
                if(nums[i] > nums[s.top()])
                {
                    while(!s.empty() && nums[i] > nums[s.top()])
                    {
                        nge[s.top()] = i;
                        s.pop();
                    }
                    s.push(i);
                }
                else
                {
                    s.push(i);
                }
            }
        }
        while(!s.empty())
        {
            nge[s.top()] = n;
            s.pop();
        }
        vector<int> res;
        int j = 0;
        for(int i = 0; i <= n-k; i++)
        {
            if(j < i)
            {
                j = i;
            }
            while(nge[j] < i+k)
            {
                j = nge[j];
            }
            res.push_back(nums[j]);
        }
        return res;
    }
};
