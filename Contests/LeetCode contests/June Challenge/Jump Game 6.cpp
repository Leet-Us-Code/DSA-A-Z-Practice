class Solution {
public:
    struct pairs{
        int value; 
        int index;
        pairs(int val, int ind)
        {
            value = val;
            index = ind;
        }
    };
    struct comparator
    {
        bool operator()(pairs const &p1, pairs const &p2)
        {
            return p1.value < p2.value;
        }
    };
    int maxResult(vector<int>& nums, int k) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int n = nums.size();
        int maxScore = nums[0];
        priority_queue<pairs, vector<pairs>, comparator> pq;
        pq.push(pairs(nums[0], 0));
        for(int i = 1; i < n; i++)
        {
            while(i - (pq.top().index) > k)
            {
                pq.pop();
            }
            pairs cur = pq.top();
            maxScore = cur.value + nums[i];
            pq.push(pairs(maxScore, i));
        }
        return maxScore;
    }
};
