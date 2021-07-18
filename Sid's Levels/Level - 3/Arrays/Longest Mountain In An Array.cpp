class Solution {
public:
    int longestMountain(vector<int>& a) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int n = a.size();
        int i = 1;
        int maxLen = 0;
        while(i < n-1)
        {
            //identify the peaks 
            if(a[i] > a[i-1] && a[i] > a[i+1])
            {
                //find the backwards length 
                int j = i;
                int cnt = 1;//include the current element 
                //as long as its non decreasing go backwards
                while(j > 0 && a[j] > a[j-1])
                {
                    j--;
                    cnt++;
                }
                //go forward 
                while(i < n-1 && a[i] > a[i+1])
                {
                    i++;
                    cnt++;
                }
                maxLen = max(maxLen, cnt);
            }
            else
            {
                i++;
            }
        }
        return maxLen;
    }
};
