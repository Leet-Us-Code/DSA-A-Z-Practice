//similiar to Aggressive cows - SPOJ 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool canBePlaced(vector<int> a, int sep, int m)
    {
        int cntr = 1;
        int loc = a[0];
        int n = a.size();
        for(int i = 1; i < n; i++)
        {
            int curLoc = a[i];
            if(a[i] - loc >= sep)
            {
                cntr++;
                loc = curLoc;
                if(cntr == m)
                    return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(), position.end());
        int s = 0, e = position[n-1]-position[0];
        int ans = -1;
        while(s <= e)
        {
            int mid = (s + e)/2;
            if(canBePlaced(position, mid, m))
            {
                ans = mid;
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        return ans;
    }
};
