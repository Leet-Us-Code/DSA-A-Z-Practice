// Hari

// 2 implementations of exact same method

// Implementation - 1

int maxProfit(vector<int>& prices) {
        // fast
        ios_base::sync_with_stdio(false); 
        int N = prices.size();
        int minPrice = INT_MAX, maxProfit = INT_MIN;
        
        for(auto it: prices){
            if(it < minPrice) minPrice = it;
            int tempProfit = it - minPrice;
            if(tempProfit > maxProfit) maxProfit = tempProfit;
        }
        return maxProfit == INT_MIN? 0 : maxProfit;
        
    }

// Implementation - 2

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
