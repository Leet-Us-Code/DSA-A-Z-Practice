// Hari

int minEatingSpeed(vector<int>& piles, int h) {
        // fast
        ios_base::sync_with_stdio(false);
        int minK = 1;
        int maxK = *max_element(piles.begin(), piles.end());

        return bSearch(piles, h, minK, maxK);
    }

    bool isEatable(vector<int>& piles, int k, int h) {
        long totalHours = 0;
        for (auto it : piles) {
            totalHours += ceil(static_cast<double>(it) / k);
        }
        return totalHours <= h;
    }

    int bSearch(vector<int>& piles, int h, int l, int r) {
        int res = -1;
        
        while (l <= r) {
            int M = l + (r - l) / 2;
            if (isEatable(piles, M, h)) {
                res = M;
                r = M - 1;
            } 
            else {
                l = M + 1;
            }
        }
        
        return res;
    }
