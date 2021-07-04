class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int n = dist.size();
        vector<float> time(n);
        for(int i = 0; i < n; i++)
        {
            time[i] = (float)((float)dist[i]/(float)speed[i]);
        }
        sort(time.begin(), time.end());
        int cntr = 0;
        for(int i = 0; i < n; i++)
        {
            if(i >= time[i])
                break;
            cntr++;
        }
        return cntr;
    }
};
