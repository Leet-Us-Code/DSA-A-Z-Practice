class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> res(n+m);
        int i = 0, j = 0, k = 0;
        while(i < n && j < m)
        {
            if(nums1[i] > nums2[j])
            {
                res[k++] = nums2[j++];
            }
            else
            {
                res[k++] = nums1[i++];
            }
        }
        while(i < n)
        {
            res[k++] = nums1[i++];
        }
        while(j < m)
        {
            res[k++] = nums2[j++];
        }
        double med; 
        if(k%2 != 0)
        {
            med = (double)(res[k/2]);
        }
        else 
        {
            med = (double)((double)(res[(k/2)-1] + res[k/2])/(double)2);
        }
        return med;
    }
};
