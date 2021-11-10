// Hari

int maxProfit(vector<int>& prices) {
        // buy low sell high
        // fast
        ios_base::sync_with_stdio(false);
        int N = prices.size();
        int finProfit = 0;
        // check
        if(N == 0) return 0;
        
        for(int i = 0; i<N-1; i++){
            if(prices[i] < prices[i+1]) finProfit += prices[i+1]-prices[i];
        }
        
        return finProfit;
    }
