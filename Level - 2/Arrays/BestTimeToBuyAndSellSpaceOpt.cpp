class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int maxProfit = INT_MIN;
        int minPrice = INT_MAX;
        int n = prices.size();
        for(int i = 0; i < n; i++)
        {
            if(prices[i] < minPrice)
                minPrice = prices[i];
            if(prices[i] - minPrice > maxProfit)
                maxProfit = prices[i] - minPrice;
        }
        return maxProfit;
    }
};
