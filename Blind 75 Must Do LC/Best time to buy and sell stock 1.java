// Hari 

class Solution {
    public static int min(int a, int b){
        if(a<b) return a;
        return b;
    }
    
    public static int max(int a, int b){
        if(a>b) return a;
        return b;
    }
    
    public int maxProfit(int[] prices) {
        int maxProfit = 0;
        int minPrice = Integer.MAX_VALUE;
        
        for(int i = 0; i<prices.length; i++){
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minPrice); 
        }
        
        return maxProfit;
    }
}
