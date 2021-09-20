class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxDif = 0;
        for(int i = 1; i < prices.size(); i++)
        {
            minPrice = min(minPrice, prices[i]);
            maxDif = max(maxDif, prices[i] - minPrice);
        }
        return maxDif;
    }
};
