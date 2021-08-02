// Hari

int maxProfit(vector<int>& prices) {
        // we need to track the lowest price -> buying point
        // and keep track of maxProfit was can sell
        
        ios_base::sync_with_stdio(false);
        
        int minPrice = INT_MAX;
        int maxProfit = 0;
        int N = prices.size();
        
        for(int i = 0; i<N; i++){
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }
        
        return maxProfit;
    }
