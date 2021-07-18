class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        //OM GAN GANAPATHAYE NAMO NAMAH
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int l = 0, r = 0;
        int left = 0, right = cardPoints.size() - 1;
        int leftSum[100000], rightSum[100000];
        leftSum[0] = 0;
        rightSum[0] = 0;
        for(int i = 1; i <= k; i++)
        {
            leftSum[i] = leftSum[i-1] + cardPoints[i-1];
        }
        // for(int i = 0; i <= k; i++)
        //     cout << leftSum[i] << " ";
        for(int i = 1; i <= k; i++)
        {
            rightSum[i] = rightSum[i-1] + cardPoints[right];
            right--;
        }
        // for(int i = 0; i <= k; i++)
        // {
        //     cout << rightSum[i] << " ";
        // }
        reverse(rightSum, rightSum + k + 1);
        int maxScore = 0;
        for(int i = 0; i <= k; i++)
        {
            maxScore = max(maxScore, leftSum[i] + rightSum[i]);
        }
        return maxScore;
    }
};
