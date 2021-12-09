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

//Sid - Method 1 
class Solution {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LASKHMI NARAYANA, BHADRE NARAYANA
    public static int max(int a, int b)
    {
        if(a > b)
            return a;
        return b;
    }
    public static int min(int a, int b)
    {
        if(a > b)
            return b;
        return a;
    }
    public int maxProfit(int[] prices) {
        int n = prices.length;
        int[] minArr = new int[n];
        int minEle = Integer.MAX_VALUE;
        for(int i = 0; i < n; i++)
        {
            minEle = min(minEle, prices[i]);
            minArr[i] = minEle;
        }
        int maxProfit = Integer.MIN_VALUE;
        for(int i = 0; i < n; i++)
        {
            maxProfit = max(maxProfit, prices[i] - minArr[i]);
        }
        return maxProfit;
    }
}

//Sid -> Method 2
class Solution {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LASKHMI NARAYANA, BHADRE NARAYANA
    public static int min(int a, int b)
    {
        if(a > b)
            return b; 
        return a;
    }
    public static int max(int a, int b)
    {
        if(a > b)
            return a;
        return b;
    }
    public int maxProfit(int[] prices) {
        int minCP = Integer.MAX_VALUE; 
        int maxProfit = Integer.MIN_VALUE; 
        int n = prices.length;
        for(int i = 0; i < n; i++)
        {
            minCP = min(minCP, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minCP);
        }
        return maxProfit;
    }
}
