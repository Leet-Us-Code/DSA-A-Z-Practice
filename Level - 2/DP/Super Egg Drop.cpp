class Solution {
public:
    int superEggDrop(int k, int n) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        //OM NAMO NARAYANAYA
        int eggFloor[k+1][n+1];// egg[i][j] => stores min moves for i eggs and j floors
        //for only 1 floor we need one trial and for 0 floors we need 0 trials
        int res;
        for(int i = 1; i <= k; i++)
        {
            eggFloor[i][1] = 1;
            eggFloor[i][0] = 0;
        }
        //if there is only 1 egg then return the number of floors -> worst case 
        for(int j = 1; j <= n; j++)
        {
            eggFloor[1][j] = j;
        }
        for(int i = 2; i <= k; i++)
        {
            for(int j = 2; j <= n; j++)
            {
                eggFloor[i][j] = INT_MAX;
                for(int x = 1; x <= j; x++)
                {
                    res = 1 + max(eggFloor[i-1][x-1], eggFloor[i][j-x]);
                    eggFloor[i][j] = min(res, eggFloor[i][j]);
                }
            }
        }
        return eggFloor[k][n];
    }
};
