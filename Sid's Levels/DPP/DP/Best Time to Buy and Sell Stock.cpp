// 2 pass -> my soln 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> lm(n);
        int maxEle = INT_MIN;
        for(int i = n-1; i >= 0; i--)
        {
            maxEle = max(maxEle, prices[i]);
            lm[i] = maxEle;
        }
        int maxDif = 0;
        for(int i = 0; i < n; i++)
            maxDif = max(maxDif, lm[i] - prices[i]);
        return maxDif;
    }
};

//Single Pass - DP 
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
