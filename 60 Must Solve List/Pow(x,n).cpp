// Hari

double myPow(double x, int n) {
        double ans = 1;
        long nn = n;
        if(nn < 0) nn = -1 * nn;
        while(nn > 0){
            if(nn % 2 != 0){
                // odd power
                ans = (ans * x);
            }
            // even power
            x = (x*x);
            nn /= 2;
        }
        if(n < 0) ans = (double)(1.0) / (double)(ans); // negative power
        return ans;
    }
