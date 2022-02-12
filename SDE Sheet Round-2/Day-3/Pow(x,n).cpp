// Hari

double myPow(double x, int n) {
        // fast
        ios_base::sync_with_stdio(false); 
        double ans = 1.0;
        long nn = n;
        if(nn < 0) nn = -1 * nn; // we will implement x^-n = 1/x^n in the end
        
        while(nn != 0){
            // if nn is odd - 2^3 = 2 * 2^2
            if(nn % 2 != 0){
                ans = ans * x;
                nn--;
            } else {
                // if nn is even - 2^4 = (2*2)^2
                x = x*x;
                nn /= 2;
            }
        }
        
        if(n < 0) ans = (double)1.0 / (double)ans;
        return ans;
    }
