class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<int> maxRev;
        int n = prices.size();
        int max = INT_MIN;
        for(int i = n-1; i >= 0; i--)
        {
            if(max < prices[i])
            {
                max = prices[i];
            }
            maxRev.push_back(max);
        }
        reverse(maxRev.begin(), maxRev.end());
        int maxProfit = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            if(maxProfit < maxRev[i] - prices[i])
                maxProfit = maxRev[i] - prices[i];
        }
        return maxProfit;
    }
};
