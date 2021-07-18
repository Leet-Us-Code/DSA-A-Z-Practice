class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int addRungs = 0;
        int prevDist = 0;
        for(int i = 0; i < rungs.size(); i++)
        {
            if(rungs[i] - prevDist > dist)
            {
                int dif = rungs[i] - prevDist;
                if(dif%dist == 0)
                    addRungs += ((dif/dist)-1);
                else
                    addRungs += (dif/dist);
            }
            prevDist = rungs[i];
        }
        return addRungs;
    }
};
