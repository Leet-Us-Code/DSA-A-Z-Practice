class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    long long int m = 1000000007;
    struct engineer
    {
        int speed;
        int efficiency;
    };
    static bool comp1(engineer e1, engineer e2)
    {
        //sorting based on reverse order
        if(e1.efficiency < e2.efficiency)
            return false;
        else
            return true;
    }
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<engineer> x;
        for(int i = 0; i < n; i++)
        {
            engineer e;
            e.speed = speed[i];
            e.efficiency = efficiency[i];
            x.push_back(e);
        }
        sort(x.begin(), x.end(), comp1);
        // for(int i = 0; i < x.size(); i++)
        //     cout << x[i].speed << " " << x[i].efficiency << endl;
       long speedSum = 0, ans = 0;
        priority_queue<int, vector<int>, greater<int>> pq;
        for (engineer eng : x) {
            int s = eng.speed;
            int e = eng.efficiency;
            speedSum += s;
            pq.push(s);
            if (pq.size() > k) { // Over k engineers -> remove the lowest speed engineer
                speedSum -= pq.top();
                pq.pop();
            }
            //no need to find the minimum efficiency as efficiency is sorted in descending order -> min efficiency will be the current efficiency
            ans = max(ans, speedSum * e);
        }
        return ans % (int) (1e9 + 7);
    }
};
