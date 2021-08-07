class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minEle = prices[0];
        int sum = 0;
        for(int i = 1; i < n; i++)
        {
            if(minEle > prices[i])
                minEle = prices[i];
            else 
            {
                sum += (prices[i] - minEle);
                minEle = prices[i];
            }
        }
        return sum;
    }
};
