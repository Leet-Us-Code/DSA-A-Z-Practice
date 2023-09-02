// Hari

int maxProfit(vector<int>& prices) {
    // fast
    ios_base::sync_with_stdio(false);
    
    int minPrice = INT_MAX, maxProfit = INT_MIN;
    
    for(auto it: prices) {
        minPrice = min(minPrice, it);
        maxProfit = max(maxProfit, it-minPrice);
    }
    
    return maxProfit;
}
