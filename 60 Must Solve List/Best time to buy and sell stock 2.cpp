// Hari

int maxProfit(vector<int>& prices) {
        // Valley Peak Approach - Buy low and sell high
        // fast
        ios_base::sync_with_stdio(false);
        
        // edge
        int N = prices.size();
        if(N == 0) return 0;        
        int profit = 0;
        
        for(int i = 0; i<N-1; i++){
            if(prices[i] < prices[i+1]) profit += (prices[i+1] - prices[i]);
        }
        
        return profit;
    }
