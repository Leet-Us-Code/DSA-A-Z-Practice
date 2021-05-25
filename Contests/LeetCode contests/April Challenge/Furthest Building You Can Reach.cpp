class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        //stores the largest k jumps where k = ladders because use ladders only for large jumps
        priority_queue<int, vector<int>, greater<int>> p;
        for(int i = 1; i < heights.size(); i++)
        {
            //find the difference between the two adjacent buildings 
            int d = heights[i] - heights[i-1];
            if(d > 0)
            {
                //use the ladder if k jumps have not been done
                if(p.size() < ladders)
                {
                    p.push(d);
                }
                else // case where we need to use bricks 
                {
                    //the thing is while we use bricks there is a small optimization which we can perform
                    //if the number of bricks is not sufficient take the smallest jump where you used the laddeer(reason for using min heap) and if possible substitute the number of bricks over there. If not possible we cannot go further 
                    int br = d;//number of bricks going to be used
                    if(p.size() > 0 && p.top() < d)
                    {
                        br = p.top();
                        p.pop();
                        //ladder will be used for this gap hence remove the old gap and push the new gap 
                        p.push(d);
                    }
                    if(bricks >= br)
                    {
                        bricks = bricks - br;
                    }
                    else 
                    {
                        return  i-1;
                    }
                }
            }
            else
            {
                continue;
            }
        }
        return heights.size()-1;
    }
};
